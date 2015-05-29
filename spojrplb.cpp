#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int a[1005] = {0};
int dp[1005][1005] = {0};
int n, k;

int solve(int i, int j)
{	
	if(i > n)	
	 return j;
	if(dp[i][j] != -1)
	 return dp[i][j];
	int ret;
	if(j + a[i] <= k)
	 ret = max(solve(i+1, j), solve(i+2, j+a[i]));
	else
	 ret = solve(i+1, j);
	return dp[i][j] = ret;		
}

int main()
{
	int cases;
	cin >> cases;
	for(int t = 1; t <= cases; ++t)
	{		
		cin >> n >> k;
		memset(dp, -1, sizeof dp);
		for(int i = 1 ; i <= n; ++i)
		 cin >> a[i];		
		printf("Scenario #%d: %d\n", t, solve(1, 0));
	}
}
