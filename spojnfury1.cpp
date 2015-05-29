#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;

int dp[1003];

int solve(int a)
{	
	
	if(a == 1)
	 return 1;
	if(a == 0)
	 return 0;	
	int ans = dp[a];	
	if(ans != -1)
	 return ans;
	ans = INT_MAX;
	for(int i = 1; ; ++i)					
	{
		if(a - i*i >= 0)
		{
			ans = min(ans, 1+solve(a-i*i));			
			dp[a] = ans;
		}
		else 
		break;
	}		
	return ans;
}
int main()
{
	int cases;
	scanf("%d", &cases);		
	memset(dp, -1, sizeof dp);
	while(cases--)
	{
		int a;
		scanf("%d", &a);		
		int ans = solve(a);				
		cout << ans << '\n';
	}
}


