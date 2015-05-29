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

int n, m;
vector <int> v[105];
double mp[105][105] = {0.0};
double dist[105];

/*void djikstra(int i)
{
	for(int in = 0; in <= 101; ++in)	 
	  dist[in] = 1000000.0;
	priority_queue <int> q;
	q.push(i);
	dist[i] = mp[make_pair(0,1)];
	while(!q.empty())
	{
		int u = q.top();
		q.pop();				
		for(int x = 0; x < v[u].size(); ++x)				
		{
			if(dist[u] + mp[make_pair(u, v[u][x])] < dist[v[u][x]])
			{
				dist[v[u][x]] = dist[u] * mp[make_pair(u, v[u][x])];				
				q.push(v[u][x]);				
			}
		}
	}
}*/

int main()
{
	while(1)
	{		
		for(int i = 0; i <= 104; ++i)
		{		
		 for(int j = 0; j <= 104; ++j)
		  mp[i][j] = 0.0;		
		 mp[i][i] = 1.;
		}
		cin >> n;
		if(n == 0)
		 break;
		cin >> m;
		int a, b, p;
		for(int i = 0; i < m; ++i)
		{
			cin >> a >> b >> p;
			if(p/100.0 > mp[a][b])
				mp[a][b] = mp[b][a]	= p/100.0;					
		}		
		for(int k = 1; k <= n; ++k)
		 for(int i = 1; i <= n; ++i)
		  for(int j = 1; j <= n; ++j)
		  	if(mp[i][k] * mp[k][j] > mp[i][j])		
            	mp[i][j] = mp[i][k]*mp[k][j];
        printf("%.6f percent\n", mp[1][n]*100.0);
	}
}

