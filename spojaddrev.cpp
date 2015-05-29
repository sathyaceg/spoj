#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    long int t;
    long int a,b,c,d,s,x;
    long int rev(long int);
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&a);
        scanf("%ld",&b);
        c=rev(a);
        d=rev(b);
        s=c+d;
        x=rev(s);
        printf("%d\n",x);
        x=0;
    }
        getch();
}
long int rev(long int r)
{
    long int d=0,s;
    while(r>0)
    {
        s=r%10;
        r=r/10;
        d=d*10+s;
    }
    return d;
}
        
