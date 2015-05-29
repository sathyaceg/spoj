#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <climits>

using namespace std;

int main()
{
	while(1)	
	{
		int n, t;
		cin >> n >> t;
		if(n == 0 && t == 0)
		 break;
		int a[n+5][n+5];
		int time[n+5][n+5];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				cin >> time[i][j];		
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				cin >> a[i][j];		
		int dp[t+5][n+5];
		for(int i = 0; i <= t; ++i)
		 for(int j = 0; j <= n; ++j)
		  dp[i][j] = INT_MAX/2;	
		for(int i = 0; i <= t; ++i)
		 dp[i][0] = 0;
		for(int ti = 0; ti <= t; ++ti)
		{
			for(int i = 0; i < n; ++i)
			{
				for(int j = 0; j < n; ++j)
				{											
						if(ti + time[i][j] <= t)
						{
							if(dp[ti][i] + a[i][j] < dp[ti+time[i][j]][j])											
								dp[ti+time[i][j]][j] = dp[ti][i] + a[i][j];															
						}
				}
			}
		}
		int ret = 0;
		int min = INT_MAX;
		for(int i = 0; i <= t; ++i)
		{
			if(dp[i][n-1] < min)
			{
				min = dp[i][n-1];
				ret = i;
			}
		}
		cout << min << ' ' << ret << '\n';
	}
}
