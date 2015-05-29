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
		char arr[105];
		scanf("%s", arr);
		set <char> a;
		for(int i = 0; i < strlen(arr); ++i) a.insert(arr[i]);
		for(set <char>::iterator it = a.begin(); it != a.end(); ++it) cout << (*it);
		cout << '\n';
	}
}
