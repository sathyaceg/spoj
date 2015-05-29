#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

long long int gcd(long long int a,long long int b)
{
    if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    if(a == 0 || b == 0)
    {
         printf("0 0\n");
         return 0;
    }               
    long long int l = (a*b)/(gcd(a, b));
    printf("%lld %lld\n", l/a, l/b);
    }
}
