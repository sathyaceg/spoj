#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n+1];
	for(int i = 0; i < n; ++i)
	 cin >> a[i];
	int count[105] = {0};	
	for(int i = 0; i < n; ++i) count[a[i]]++;
	int ret = -1;
	if(count[0] == n) ret = 0;
	else 
	{
		for(int w = 1; w < 105; ++w)
		{
			if(count[w-1] == w && count[w] == n-w)
			{
				ret = w;
				break;
			}
		}		
	}	
	cout << ret << '\n';
}
