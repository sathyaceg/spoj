#include<iostream>
using namespace std;
int main()
{
    long long int a,b;
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    if(a%2!=0)
     a++;
    a=a/2;
    printf("%lld\n",a*b);
    }
}
