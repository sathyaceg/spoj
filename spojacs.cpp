#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	char c;
	int a[1024];
	int b[5678];
	for(int i = 0; i < 1024; ++i)
	{
		a[i] = i;
	}
	for(int j = 0; j < 5678; ++j)
	{
		b[j] = j;
	}
	while(cin >> c)
	{
		int v = 0;		
		int x, y, z;
		if(c == 'W')
		{
		 	scanf("%d", &z);
		 	int r = (z-1)/5678;
		 	int c = (z-1)%5678;		 
		 	int i, j;
			for(i = 0; a[i]!=r; ++i);			 	
			for(j = 0; b[j]!=c; ++j);
		 	printf("%d %d\n",i + 1, j + 1);
		 }
		else if(c == 'Q')
		{
			scanf("%d %d", &x, &y);
			printf("%d\n", a[x-1]*5678+b[y-1]+1);
		}
		else if(c == 'R')
		{
			scanf("%d %d", &x, &y);			
			int t = a[x-1];
			a[x-1] = a[y-1];
			a[y-1] = t;			
		}		
		else if(c == 'C')	 		
		{
			scanf("%d %d", &x, &y);			
			int t = b[x-1];
			b[x-1] = b[y-1];
			b[y-1] = t;
		}
	}
}
