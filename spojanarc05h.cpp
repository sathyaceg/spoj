#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

int dp[30][300];
string a;
int len;

int solve(int pos, int psum)
{
	if((int)a.size() == pos)
	 return 1;
	if(dp[pos][psum] != -1)
	 return dp[pos][psum];	
	int ret = 0, sum = 0;
	for(int i = pos; i < a.size(); ++i)
	{
		sum += a[i]-'0';
		if(sum >= psum)
		 ret += solve(i+1, sum);
	}
	return dp[pos][psum] = ret;
}

int main()
{
	int j = 1;
	while(1)
	{				
		cin >> a;
		if(a == "bye")
		 break;		
		memset(dp, -1, sizeof dp);
		printf("%d. %d\n", j++, solve(0, 0));
	}
}
