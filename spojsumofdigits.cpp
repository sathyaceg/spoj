#include<iostream>
#include<conio.h>
long long int s=0;
long long int digit(long long int n)
{
    long long int d;
    if(n>0)
    {
        d=n%10;
        n=n/10;
        s+=d;
        digit(n);
    }
    return s;
}
int main()
{
    long long int x,a,b;
    while(1)
    {
        x=0;
        scanf("%lld%lld",&a,&b);
        if(a==-1 && b==-1)
         break;
        for(int i=a;i<=b;i++)
        {
            x=digit(i);
        }
        printf("%lld\n",x);
        s=0;
    }
}
