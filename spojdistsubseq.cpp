#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <climits>
#include <set>
#include <map>
#include <queue>

using namespace std;

int main()
{
	int cases;
	cin >> cases;
	const int N = 100005;
	long long int last[128];
	long long int dp[N];
	char a[N];
	while(cases--)
	{				
		cin >> a+1;		
		dp[0] = 1;		
		memset(last, 0, sizeof last);
		int i= 1;		
		for(i = 1; a[i]; ++i)
		{
			dp[i] = dp[i-1] << 1;
			if(last[a[i]] != 0)			
				dp[i] -= (dp[last[a[i]] - 1]);	
			if(dp[i] < 0) dp[i]	+= 1000000007;
			else if(dp[i] >= 1000000007) dp[i] -= 1000000007;
			last[a[i]] = i;			
		}		
		cout << dp[--i] << '\n';
	}	
}
