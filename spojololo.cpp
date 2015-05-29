#include<iostream>
int main()
{
    long long int a,n,b=0;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a);
        b=b^a;
    }
    printf("%lld\n",b);
}
