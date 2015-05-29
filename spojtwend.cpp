#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

int n, a[1005], dp[1005][1005];

int recurse(int i, int j)
{
	if(i > j)
	 return 0;
	int &ret = dp[i][j];
	if(ret != -1) return dp[i][j];
	int s1 = 0, s2 = 0;
	if(a[i+1] >= a[j]) s1 = a[i] + recurse(i+2, j);
	else if(a[i+1] < a[j]) s1 = a[i] + recurse(i+1, j-1);
	if(a[i] >= a[j-1]) s2 = a[j] + recurse(i+1, j-1);
	else if(a[i] < a[j-1]) s2 = a[j] + recurse(i, j-2);
	ret = max(s1, s2);
	return ret;
}
int main()
{
	int j = 1;
	while(1)
	{
		cin >> n; 
		if(n == 0)
			break;
		int s = 0;
		for(int i = 0; i < n; ++i)	
			cin >>a[i], s+=a[i];
		memset(dp, -1, sizeof dp);
		for(int i = 0; i <= n; ++i) dp[i][i] = a[i];		
		int p1 = recurse(0, n-1);
		int p2 = s - p1;
		int p = p1 - p2;
		printf("In game %d, the greedy strategy might lose by as many as %d points.\n", j++, p);
	}		
}

