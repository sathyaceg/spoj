#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <climits>
#include <cmath>
#include <map>
#include <queue>
#include <set>

using namespace std;

int dp[55][505][505];
int d[505], arr[505], N;

int recurse(int n, int H, int J) {
	if(H <= 0 || J <= 0) return 0;
	if(n >= N) return 0;
	int &ret = dp[n][H][J];
	if(ret != -1) return ret;
	int ret1 = 0, ret2 = 0;
	ret1 = recurse(n + 1, H, J);
	if(H - d[n] > 0 && J - arr[n] > 0) ret2 = 1 + recurse(n + 1, H - d[n], J - arr[n]);	
	ret = max(ret1, ret2);
	return ret;
}

int main() {
	int cases;
	scanf("%d", &cases);
	while(cases--) {
		int n, h, j;
		scanf("%d %d %d", &n, &h, &j);
		memset(dp, -1, sizeof dp);
		N = n;
		for(int i = 0; i < n; ++i) scanf("%d", &d[i]);
		for(int i = 0; i < n; ++i) scanf("%d", &arr[i]);
		int a = recurse(0, h, j);
		cout << a << '\n';
	}
}
