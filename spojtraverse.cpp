#include <iostream>
#include <cstdio>

using namespace std;
int main()
{	
	int n;
	scanf("%d", &n);	
	char a[n+1][n+1];
	int b[n+1][n+1], dp[n+1][n+1];
	for(int i = 0; i < n; ++i)	
		scanf("%s", a[i]);	
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			b[i][j] = a[i][j] - '0';
			dp[i][j] = 0;
		}
	}
	dp[0][0] = 1;
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			if(!(i==n-1 && j==n-1) && dp[i][j] > 0)
			{
				if(i+b[i][j] < n)
				 dp[i+b[i][j]][j]+=dp[i][j];
				if(j+b[i][j] < n)
				 dp[i][j+b[i][j]]+=dp[i][j];
				 
			}
		}
	}	
	printf("%d", dp[n-1][n-1]);
}
