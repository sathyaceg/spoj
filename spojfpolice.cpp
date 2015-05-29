#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <climits>
#include <vector>
#include <cstdio>
#include <queue>

using namespace std;

int main()
{
	int cases;
	cin >> cases;
	while(cases--)
	{
		int n, t;
		cin >> n >> t;
		int adj1[n+1][n+1], adj2[n+1][n+1];
		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < n; ++j)
			{
				cin >> adj1[i][j];
			}
		}
		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < n; ++j)
			{
				cin >> adj2[i][j];
			}
		}
		int dist[n+5], time[n+5];
		for(int i = 0; i <= n; ++i)
			dist[i] = 10000000, time[i] = 10000000;
		dist[1] = 0;
		time[1] = 0;
		for(int i = 1; i <= n-1; ++i)
		{
			for(int j = 0; j < n*(n-1); ++j)
			{
				
			}
		}
	}
}
