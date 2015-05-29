#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int a[32000] = {0};
	int p[32000]= {0};
	int max = 4000;
	for(int i = 2; i <= max; ++i)
	{
		if(a[i] == 0)  
		{
			for(int j = i*2; j <= max; j+=i)
			{
				a[j] = 1;
			}
		}
	}
	int l = 0;
	for(int j = 2; j <= max; ++j)
	{
		if(a[j] == 0)
		{
			p[l++] = j;
		}
	}
	for(int i = 0; i < 25; ++i)
	 cout << p[i] << '\t';
	cout << '\n';
	while(1)
	{
		int n;
		scanf("%d", &n);
		if(n == 0)
		 break;
		cout << p[n] << '\n';
	}
}
