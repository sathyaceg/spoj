#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n+5];
	for(int i = 0; i <=n ; ++i)
	 a[i] = 0;
	int s, e;
	for(int i = 0; i < m; ++i)	 	
	{
		scanf("%d %d", &s, &e);
		a[s]+=1;
		a[e]-=1;
	}	
	int sum = 0;
	for(int i= 1; i <= n; ++i)
	{
		sum+=a[i];
		a[i] = sum;
	}	
	sort(a+1, a+n);
	cout << a[n/2+1] << '\n';
}
