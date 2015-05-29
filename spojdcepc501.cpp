#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

long long int a[100005];
long long int c[100005];

long long int fun(int i, int n)
{
	if(c[i]>=0)
	 return c[i];
	if(n-i <= 2)
	{
		int tmp= 0;
		for(int k = i; k <= n; ++k)
		 tmp+=a[k];
		c[i] = tmp;
		return c[i];
	}
	else
	{
		long long int x, y, z;
		x = a[i] + fun(i+2, n);
		y = (i+4)<=n? a[i]+a[i+1] + fun(i+4, n):a[i] + a[i+1];
		z = (i+6)<=n? a[i]+a[i+1]+a[i+2] + fun(i+6, n):a[i]+a[i+1]+a[i+2];
		c[i] = max(x, max(y, z));
		return c[i];
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{	
		int n;
		scanf("%d", &n);		
		for(int i = 0; i < n; ++i)
		 scanf("%lld", &a[i]);
		memset(c, -1, sizeof c);
		cout << fun(0, n-1) << '\n';
	}
}
