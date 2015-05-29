#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int a[105];
int smoke[105][105], color [105][105];

int main()
{
	int n;
	while((scanf("%d", &n)) != EOF)
	{		
		for(int i = 0; i < n; ++i)
		 cin >> a[i];
		for(int i = 0; i < n; ++i)
		 smoke[i][i] = 0, color[i][i] = a[i];		
		for(int l = 2; l <= n; ++l)
		{
			for(int i = 0; i <= n-l; ++i)
			{
				int j = i+l-1;
				smoke[i][j] = 100000000;
				for(int k = i; k <= j-1; ++k)
				{					
					int temp = smoke[i][k] + smoke[k+1][j] + (color[i][k]*color[k+1][j]);
					if(temp < smoke[i][j])
					{				
						smoke[i][j] = temp;
						color[i][j] = (color[i][k] + color[k+1][j])%100;
					}
				}
			}	
		}			
		cout << smoke[0][n-1] << '\n';
	}	
}
