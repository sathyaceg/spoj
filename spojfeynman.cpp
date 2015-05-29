#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    long long int n;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0) break;
        printf("%lld\n",(n*(n+1)*((2*n)+1))/6);
    }
    getch();
}
