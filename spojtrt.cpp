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

int n, a[2005], dp[2005][2005];

int recurse(int i, int j, int age)
{
	if(i == j)
	 return dp[i][i];
	int &ret = dp[i][j];
	if(ret != -1) return ret;
	int s = 0, s1 = 0;
	s = (a[i]*age) + recurse(i+1, j, age+1);
	s1 = (a[j]*age) + recurse(i, j-1, age+1);
	ret = max(s, s1);
	return ret;
}

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)	
		scanf("%d", &a[i]);
	memset(dp, -1, sizeof dp);	
	for(int i = 0; i < n; ++i)
	 dp[i][i] = a[i]*n;
	printf("%d\n", recurse(0, n-1, 1));
}
