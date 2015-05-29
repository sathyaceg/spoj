#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c,ch=0;
        scanf("%lld%lld",&a,&b);
        c=1;
        while(b>0)
        {
        if(b%2!=0)
        {
            c=c*a;
            b=b-1;
        }
        b=b/2;
        a=a*a;cout<<c<<'\n';c=c%10;a=a%10;cout<<c<<'\n';
        ch++;
        }
        printf("%lld %lld\n",c,ch);
    }
    getch();
}
        
        
