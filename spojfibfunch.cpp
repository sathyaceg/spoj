#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int t;
    long long int a,b,n,m,c,s=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld%lld",&a,&b,&n,&m);
        int p;
        p=a+b;
        s=0;
        for(int i=0;i<n-2;i++)
        {
            c=a+b;
            s+=c;
            a=b;
            b=c;
        }
        s+=p;
        printf("%d\n",s%m);
    }
    getch();
}
