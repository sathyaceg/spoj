#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <climits>
#include <vector>
#include <cstdio>
using namespace std;

int dp[65][65];

int recurse(int n, int k)
{			
	if(n == 1 && k == 0)
	{	
	 //cout << "1 ";
	 return 1;
	}		
	int &ret = dp[n][k];
	if(ret != -1) return ret;
	ret = 0;	
	for(int i = n; i >= 1; --i)
	{
		for(int j = k; j >= 0; --j)
		{			
			ret += (recurse(i, j));						
			cout << "I: " << i << "J: " << j << "RET: " << ret << ' ';	
		}	 
	}	
	cout << '\n';
	return ret;
}

int main()
{
	memset(dp, -1, sizeof(dp));
	cout << recurse(1, 1) << '\n';
}

