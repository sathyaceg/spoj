#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <climits>
#include <map>
#include <vector>
#include <climits>
#include <queue>

using namespace std;

long long int n, e, t, m, a, b, c;
vector <long long int> v[105];
map <pair <long long int, int>, long long int> mp;
int dist[105] = {INT_MAX};

void djikstra(int i)
{
	for(int j = 0; j <= 100; ++j)
	 dist[j] = 10000000;
	priority_queue <long long int> q;
	q.push(i);
	dist[i] = 0;	
	while(!q.empty())
	{		
		int u = q.top();
		q.pop();
		for(int x = 0; x < v[u].size(); ++x)
		{			
			if(dist[u] + mp[make_pair(u, v[u][x])] < dist[v[u][x]])
			{
				dist[v[u][x]] = dist[u] + mp[make_pair(u, v[u][x])];				
				q.push(v[u][x]); 
			}
		}
	}
}

int main()
{
	cin >> n >> e >> t >> m;			
	for(int i = 0 ; i < m; ++i)
	{
		cin >> a >> b >> c;
		v[a].push_back(b);
		mp[make_pair(a,b)] = c;
	}	
	long long int ans = 0;	
	for(int i = 1; i <= n; ++i)
	{				
		djikstra(i);
		if(dist[e] <= t)				 	
		 ans++;		
	}		
	cout << ans << '\n';	
}
