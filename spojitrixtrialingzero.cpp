#include<iostream>
using namespace std;
unsigned zeroCount(unsigned long long k)
{
    unsigned zeros = 0;
    while(k) {
        zeros += (k % 10) == 0;
        k /= 10;
    }
    return zeros;
}
long long nami(unsigned long long n)
{
    if (n == 0) {
        return 0;
    }
    if (n <= 10) {
        return 1;
    }
    unsigned long long k = n/10, r = n%10;
    unsigned long long zeros = k + 10*(nami(k)-1);
    if (r > 0) {
        zeros += r*zeroCount(k) + 1;
    }
    return zeros;
}
long long pinky(long long low, long long high)
{
    return nami(high+1) - nami(low); 
}



int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,s=0,c=0;
        scanf("%lld%lld",&a,&b);
        printf("%lld\n",pinky(a,b));
    }
}
