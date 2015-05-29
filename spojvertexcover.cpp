#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> a[100005];
int dp[100005][2] = {-1};

int solve(int cur, int parent, bool isparent)
{
	if(dp[cur][isparent] != -1)
	 return dp[cur][isparent];
	int &ret = dp[cur][isparent];
	if(isparent)
	{
		ret = 0;
		for(int i = 0; i < a[cur].size(); ++i)
		{
			if(a[cur][i] != parent)
			 ret+=solve(a[cur][i], cur, false);
		}
		int r = 1;
		for(int i = 0; i < a[cur].size(); ++i)
		{
			if(a[cur][i] != parent)
			 r+=solve(a[cur][i], cur, true);
		}				
		ret = min(ret, r);
	}
	else
	{
		ret = 1;
		for(int i = 0; i < a[cur].size(); ++i)
		{
			if(a[cur][i] != parent)
			 ret+=solve(a[cur][i], cur, true);
		}
	}				
	return ret;
}
int main()
{
	int n;
	cin >> n;
	int u, v;
	for(int i = 0; i < n-1; ++i)
	{
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	memset(dp, -1, sizeof dp);
	int ret = 1, res = 0;
	for(int i = 0; i < a[1].size(); ++i)	
		ret+=solve(a[1][i], 1, true);
	for(int i = 0; i < a[1].size(); ++i)
		res+=solve(a[1][i], 1, false);		
	cout << min(ret, res);
}
