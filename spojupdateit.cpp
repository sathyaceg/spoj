#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{	
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n+5];
	for(int i = 0; i <= n ; ++i)
	 a[i] = 0;
	int s, e, val;
	for(int i = 0; i < m; ++i)	 	
	{
		scanf("%d %d %d", &s, &e, &val);
		a[s] += val;
		if(e + 1 < n)
		a[e + 1] -= val;
	}	
	int sum = 0;
	for(int i= 0; i < n; ++i)
	{
		sum += a[i];
		a[i] = sum;
	}		
	int q;
	scanf("%d", &q);
	int in;
	for(int i = 0; i < q; ++i)
	{
		scanf("%d", &in);
		cout << a[in] << '\n';
	}
	}
}
