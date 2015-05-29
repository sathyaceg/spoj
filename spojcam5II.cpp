#include <iostream>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <cstring>

using namespace std;

vector <vector <int> > a(100010);
bool visited[100010] = {false};

void dfs(int u)
{
	visited[u] = true;
	for(int i = 0; i < a[u].size(); ++i)
	 {
	 	if(!visited[a[u][i]])
	 	{
	 		dfs(a[u][i]);
	 	}
	 }
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, e;
		scanf("%d %d", &n, &e);
		if(e == 0)
		{
			printf("%d\n", n);
			continue;
		}
		int u, v;		
		for(int i = 0; i < e; ++i)
		{
			scanf("%d %d", &u, &v);
			a[u].push_back(v);
			a[v].push_back(u);
		}
		memset(visited, false, sizeof visited);
		int c= 0;
		for(int i = 0; i < n; ++i)
		{
			if(!visited[i])
			{
				dfs(i);
				c++;
			}
		}
		printf("%d\n", c);
		for(int i = 0; i < n; ++i)
		 a[i].clear();
	}
}
		
