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

char op[105];
int dig[105];
string a;
long long int dp[105][105], dp1[105][105];
int n;

long long int recurse1(int i, int j)
{
	if(i == j) return dp[i][i];
	long long int &ret = dp[i][j];
	if(ret != -1) return ret;
	ret = 0;
	for(int k = i; k < j; k++)
	{	
		long long q;
		if(op[k] == '+')
		 q = recurse1(i, k) + recurse1(k+1, j);
		else
		 q = recurse1(i, k) * recurse1(k+1, j); 
		ret = max(ret, q);
	}
	return ret;
}

long long int recurse2(int i, int j)
{
	if(i == j) return dp[i][i];
	long long int &ret = dp1[i][j];
	if(ret != -1) return ret;
	ret = INT_MAX;
	for(int k = i; k < j; k++)
	{
		long long q;
		if(op[k] == '+')
		 q = recurse2(i, k) + recurse2(k+1, j);
		else
		 q = recurse2(i, k) * recurse2(k+1, j);
		ret = min(ret, q);
	}
	return ret;
}
int main()
{
	int cases;
	cin >> cases;
	while(cases--)
	{
		cin >> a;
		int j = 0, k = 0;		
		memset(dp, -1, sizeof dp);		
		memset(dp1, -1, sizeof dp1);		
		for(int i = 0; i < a.size(); ++i)
		{
			if(i%2 == 0)
				dig[j++] = a[i]-'0';
			else
				op[k++] = a[i];
		}
		n = j;
		for(int i = 0; i < n; ++i)
		 dp[i][i] = dig[i];
		for(int i = 0; i <= n; ++i)
		 dp1[i][i] = dig[i];
		cout << recurse1(0, n-1) << ' ';
		cout << recurse2(0, n-1) << '\n';
	}
}
