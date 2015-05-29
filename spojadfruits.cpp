#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int c[111][111];
char a[110];
char b[110];
char d[111][111];

void print_LCS(int i, int j)
{
	if(i == 0)
	{
		for(int k = 0; k < j;k++)
		 printf("%c", b[k]);
		return;
	}
	if(j == 0)
	{
		for(int k = 0; k < i; k++)
		 printf("%c", a[k]);
		return;
	}
	if(d[i][j] == 'D')
	{
		print_LCS(i-1, j-1);
		printf("%c", a[i-1]);
	}
	else if(d[i][j] == 'U')
	{
		print_LCS(i-1, j);
		printf("%c", a[i-1]);
	}
	else
	{
		print_LCS(i, j-1);
		printf("%c", b[j-1]);	
	}
}

int main()
{	
	while(scanf("%s %s", &a, &b)!= EOF)
	{
		int n = strlen(a);
		int m = strlen(b);
		for(int i = 0; i <= 110; ++i)
			c[i][0] = c[0][i] = 0;
		for(int i = 1; i <= n; ++i)
		{
			for(int j = 1; j <= m; ++j)
			{
				if(a[i-1] == b[j-1])
				{
					c[i][j]=c[i-1][j-1]+1;
					d[i][j] = 'D';
					
				}
				else if(c[i-1][j] >= c[i][j-1])
				{
					c[i][j] = c[i-1][j];
					d[i][j] = 'U';
				}
				else
				{
					c[i][j] = c[i][j-1];
					d[i][j] = 'L';
				}
			}
		}
		print_LCS(n, m);
		printf("\n");
	}
	return 0;
}

