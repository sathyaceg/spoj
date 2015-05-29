#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <cstring>

using namespace std;


vector< int > vex[ 200005], vt[ 200005 ];
int comp[200005];
stack <int> s;
bool visited[200000];

void ts(int i)
{
	visited[i] = true;
	for(int x = 0; x < vex[i].size(); ++x)
		if(visited[vex[i][x]] == false)			
		 ts(vex[i][x]);
	s.push(i);
}

void dfs(int i, int c)
{
	visited[i] = true;	
	comp[i] = c;	
	for(int x = 0; x < vt[i].size(); ++x)
	{
		if(visited[vt[i][x]] == false)
		 dfs(vt[i][x], c);
	}
}

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int u, v;	
	for(int i = 1; i <= n; ++i)
	 vex[i].clear(), vt[i].clear();
	for(int i = 0; i < m; ++i)
	{
		scanf("%d %d", &u, &v);
		vex[u].push_back(v);
		vt[v].push_back(u);
	}
	memset(visited, false, sizeof visited);
	for(int i = 1; i <= n; ++i)
	{
		if(visited[i] == false)		
		 ts(i);		
	}
	//reverse();	
	memset(visited, false, sizeof visited);
	int c = 0;
	while(!s.empty())
	{
		int x = s.top();			
		s.pop();
		if(visited[x] == false)
		{
			dfs(x, c++);
			cout << '\n';			
		
		}
	}
	int in[200005] = {0};
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 0; j < vt[i].size(); ++j)
		{
			if(comp[i] != comp[vt[i][j]]) 
			 in[comp[vt[i][j]]]+=1;
		}
	}		 
	int count = 0;	
	for(int i = 0; i < c; ++i)
	{
		if(in[i] == 0)
		 count++;
	}	
	if(count > 1)
	 printf("0\n");
	else
	{
		count = 0;
		for(int i = 1; i <= n; ++i)
		{
			if(in[comp[i]] == 0)
			 count++;
		}
		printf("%d\n", count);
		for(int i = 1; i <= n; ++i)
		{
			if(in[comp[i]] == 0)
			 printf("%d ", i);
		}
		printf("\n");
	}
}
