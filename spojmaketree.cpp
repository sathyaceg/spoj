#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	int in[n+1], a[n+1];
	for(int i = 1; i <= n; ++i)
	{
		in[i] = 0;
		a[i] = 0;
	}
	vector <int> adj[n+1];
	int u, v;
	for(int i = 1; i <= k; ++i)
	{
		scanf("%d", &u);
		for(int j = 0; j < u; ++j)
		{
			scanf("%d", &v);
			adj[i].push_back(v);
			in[v]+=1;
		}
	}
	int p = 0;
	queue <int> q;
	for(int i = 1; i <= n; ++i)	
	{
		if(in[i] == 0)
		 q.push(i);
	}
	while(!q.empty())
	{
		u = q.front();
		q.pop();
		a[u] = p;
		for(int i = 0; i < adj[u].size(); ++i)
		{
			v = adj[u][i];
			in[v]-=1;
			if(in[v] == 0)
			 q.push(v);
		}
		p = u;
	}
	for(int i = 1; i <=n; ++i)
	 cout << a[i] << '\n';
}
