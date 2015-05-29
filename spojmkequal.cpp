#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <climits>
#include <map>
#include <vector>
#include <climits>
#include <queue>

using namespace std;

int main()
{
	int cases;
	cin >> cases;
	while(cases--)	
	{
		int n;
		cin >> n;
		int a[n+1];
		int s = 0;
		for(int i = 0; i < n; ++i)
		 cin >> a[i], s+=a[i];
		if(s %n == 0)
		 cout << n << '\n';
		else 
		cout << n-1 << '\n';
	}
}
