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
		int a, b;
		cin >> a >> b;
		if(a%2 != 0 && b%2 != 0)
		 cout << "Ramesh\n";
		else
		 cout << "Suresh\n";
	}
}
