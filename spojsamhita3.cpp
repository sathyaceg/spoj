#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,m;
    scanf("%d%d",&n,&m);int mina=n+5;
    int a[n+1][m+1];
    for(int i=0;i<n;i++)
     for(int j=0;j<m;j++)
      scanf("%d",&a[i][j]);
    int v;
    scanf("%d",&v);int t;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==v)
             t=min(i,n-i);
             t+=min(j,m-j);
             if(t<mina)
              mina=t;
        }
    }
    printf("%d\n",mina);
    }
    //system("pause");
}
    
            
