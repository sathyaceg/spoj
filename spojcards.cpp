#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int a,s=0;
        scanf("%lld",&a);
        s=a*(3*a+1)/2;
        printf("%lld\n",s%1000007);
    }
    getch();
}
            
