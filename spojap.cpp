#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int t;
    long long int in,d,a,b,s,c,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",a,b,s);
        c=a+b;
        n=(s/c)*2;
        d=n-b;
        in=a-d;
        d=d/2;
        printf("%lld\n",n);
        for(int i=in;i<=n;i+=d)
         printf("%lld ",i);
    }
    getch();
}
