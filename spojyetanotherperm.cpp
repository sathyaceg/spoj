#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a;
        scanf("%lld",&a);
        printf("%lld\n",(long long int)pow(2,a-1)%1000000007);
    }
}
