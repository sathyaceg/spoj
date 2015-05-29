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

using namespace std;

int n;
long long k, arr[1005];

long long f(long long x) {
	long long ret = 0LL, a, b, c, first, second;
	for(int i = 0; i < n; ++i) {
		//eq to solve : n ^ 2 + n * (2 * arr[i] - 1) - 2 * x = 0;
		a = 1LL, b = (2LL * arr[i] - 1), c = -2 * x;
		if((b * b) - (4 * a * c) < 0) continue;
		first = (b * b) - (4 * a * c);
		long double root = sqrt(first);
		long double add = -1.0 * (double)b;
		add = (add + root) / 2;
		long long fac = (long long)add;			
		ret += fac;
	}	
	return ret;
}

long long recurse(long long low, long long high) {
	if(low > high) return -1LL;
	if(low == high) return low;
	long long mid = (low + high) / 2;	
	if(mid - 1 >= low && f(mid) >= k && f(mid - 1) < k) return mid;
	if(mid + 1 <= high && f(mid) < k && f(mid + 1) >= k) return mid + 1;
	if(f(mid) >= k) return recurse(low, mid - 1);
	return recurse(mid + 1, high);
}

int main() {
	int cases;
	scanf("%d", &cases);
	while(cases--) {		
		scanf("%d %lld", &n, &k);		
		for(int i = 0; i < n; ++i) scanf("%lld", &arr[i]);
		long long a = recurse(0, 1000000000000000000LL);		
		printf("%lld\n", a);
	}
}
