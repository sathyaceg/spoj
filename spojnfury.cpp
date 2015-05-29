#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
	int cases;
	scanf("%d", &cases);
	int sq[10005];
	for(int i = 1; i <= 100; ++i)
	{
		sq[i*i]= 1;
	}
	while(cases--)
	{
		int a;
		scanf("%d", &a);
		int dp[1005] = {0};
		dp[1] = 1;
		int dp1[1005] = {0};
		//dp1[1000]
		for(int i = 2; i <= a; ++i)
		{
			if(sq[i] == 1)
			 dp[i] = 1;
			else
			 dp[i] = dp[i-1]+1;
		}
		cout << dp[a] << '\n';
	}
}
