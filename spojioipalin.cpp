#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <climits>

using namespace std;

int dp[6105][6105];
char a[6105], b[6105];

int lcs(int n) {
	for(int i = 0; i <= n; ++i) {
		for(int j = 0; j <= n; ++j) {
			if(i == 0 || j == 0) dp[i][j] = 0;
			else if(a[i - 1] == b[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	return dp[n][n];
}

int main() {
	int cases;
	cin >> cases;	
	while(cases--) {	
		scanf("%s", a);
		int n = strlen(a);
		int j = 0;
		for(int i = n - 1; i >= 0; --i)			
			b[j++] = a[i];
		b[j++] = '\0';
		cout << n - lcs(n) << '\n';
	}
}
