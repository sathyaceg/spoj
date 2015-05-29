#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int j=1;
    while(1)
    {
    int n,m,r;
    scanf("%d",&n);
    if(n==-1)
     break;
    int a[n+1];
    for(int i=n;i>=0;i--)
     scanf("%d",&a[i]);
    scanf("%d",&m);
    int x[m];
    for(int i=0;i<m;i++)
     scanf("%d",&x[i]);
    printf("Case %d:\n",j);
    for(int i=0;i<m;i++)
    {
        r=a[n];
        for(int j=n-1;j>=0;j--)
         r=(r*x[i])+a[j];
        printf("%d\n",r);
    }printf("\n");j++;
    }
    getch();
}
        
