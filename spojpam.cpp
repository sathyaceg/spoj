#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, e;
		scanf("%d %d", &n, &e);
		if(e == 0)
		{
			printf("%d\n", n);
			continue;
		}
		int a[n+1], c = 0;
		int f1, f2;
		for(int i = 0; i < n; ++i)
		 a[i] = 0;
		for(int i = 0; i < e; ++i)
		{
			scanf("%d %d", &f1, &f2);
			if(a[f1] == 0 && a[f2] == 0)
			 c++;
			a[f1] = 1;
			a[f2] = 1;
		}
		for(int i = 0; i < n; ++i)
		 if(a[i] == 0)
		  c++;
		printf("%d\n", c);
	}
}
