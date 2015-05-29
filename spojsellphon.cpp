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

int main() {
	int cases;
	cin >> cases;
	while(cases--) {
		int l, m, n;
		cin >> l >> m >> n;
		char arr[m + 1][n + 1];
		int s[n + 1];
		for(int i = 0; i < n; ++i) scanf("%d", &s[i]);
		for(int i = 0; i < m; ++i) scanf("%s", arr[i]);		
		int a = 0;
		for(int i = 0; i < m; ++i) {
			for(int j = 0; j < n; ++j) {
				if(arr[i][j] == 'Y' && l > 0 && s[j] > 0) {					
					int d = min(s[j], l);					
					a += d;
					l -= d;
					s[j] = s[j] - d;					
				}
			}
		}
		cout << a << '\n';
	}
}
