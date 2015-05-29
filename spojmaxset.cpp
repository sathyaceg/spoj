#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <vector <int> >L(100005);
int lis( int *X, int *Y, int n )
{   
   int i, j;     
   for (i=0; i<=n; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i].push_back(0);
  
       else if (X[i-1] == Y[j-1])
         L[i].push_back(L[i-1][j-1] + 1);
  
       else
         L[i].push_back(max(L[i-1][j], L[i][j-1]));
     }
   }       
   return L[n][n];
}
  
int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
  	int n;
  	scanf("%d", &n);
  	int a[n+1];
  	for(int i = 0; i < n; ++i)
  	 scanf("%d", &a[i]);
  	int b[n+1];
  	for(int i = 0; i < n; ++i)
  	 b[i] = a[i];
  	sort(b, b+n);
  	for(int i = 0; i <= n; ++i)
		 L[i].clear();
  	cout << lis(a, b, n) << '\n';
  }
  return 0;
}
