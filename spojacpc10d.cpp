#include <iostream>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
	int j = 1;
	while(1)
	{
		int n;
		scanf("%d", &n);
		if(n == 0)
		 break;
		long long int a[n+1][3];
		for(int i = 0; i < n; ++i)
		 for(int j = 0; j < 3; ++j)					
		  scanf("%lld", &a[i][j]);
		long long int dp[n+1][3];
		dp[0][0] = a[0][0] + 100000000;
		dp[0][1] = a[0][1];
		dp[0][2] = a[0][1] + a[0][2];
		for(int i = 1; i < n; ++i)
		{
			for(int j = 0; j < 3; ++j)
			{
				if(j == 0)
				 dp[i][j] = a[i][j] + min(dp[i-1][j], dp[i-1][j+1]);
				else if(j == 2)
				 dp[i][j] = a[i][j] + min(min(dp[i-1][j], dp[i-1][j-1]), dp[i][j-1]);
				else
				 dp[i][j] = a[i][j] + min(min(dp[i-1][j], dp[i-1][j+1]), min(dp[i-1][j-1], dp[i][j-1]));
			}
		}
		cout << j << ". "<< dp[n-1][1] << '\n';
		j++;
	}
}
