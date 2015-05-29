#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int n, m;
char a[1005][1005];
int c[1005][1005]={0};
int pc = 0, co = 0;

void ff(int i, int j)
{
	if(i >= 0 && j >= 0 && i < n && j < m)
	if(c[i][j] == 0)
	{
		c[i][j] = co;
		if(a[i][j] == 'E')
		 ff(i, j+1);
		else if(a[i][j] == 'W')
		 ff(i, j-1);
		else if(a[i][j] == 'N')
		 ff(i-1, j);
		else if(a[i][j] == 'S')
		 ff(i+1, j);
		c[i][j] = co;
	}	
	else
	{
		co = c[i][j];
		return;
	}
}
int main()
{
	cin >> n >> m;
	for(int i = 0; i < n; ++i)
	 cin >> a[i];
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; ++j)
		{
			if(c[i][j] == 0)
			{
				co = pc+1;
				ff(i, j);
				if(pc < co)
				 pc++;
			}
		}
	}
	cout << pc << '\n';
}
