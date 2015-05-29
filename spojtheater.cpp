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
#include <climits>

#define mod 1000000007

using namespace std;

int main() {
	stack <int> s;
	int n;
	cin >> n;
	int a[n + 1];
	for(int i = 0; i < n; ++i) cin >> a[i];
	long long int ret = 1;	
	s.push(a[0]);
	for(int i = 1; i < n; ++i) {
		if(a[i] < s.top()) s.push(a[i]);
		else {
			while(!s.empty() && a[i] > s.top()) {
				ret = ((ret % mod) * (a[i] % mod)) % mod;
				s.pop();
			}
			s.push(a[i]);
		}
	}
	cout << ret << '\n';	
}
