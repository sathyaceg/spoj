#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    long long int gcd(long long int,long long int);
    long long int a,b,t;
    scanf("%lld",&t);
    while(t--){
    scanf("%lld%lld",&a,&b);
    printf("%lld\n",gcd(a,b));}
    getch();
}
long long int gcd(long long int a,long long int b)
{
    if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
