#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    long long int n,k;
    scanf("%lld%lld",&n,&k);
    long long int a[n+1],c=0;
    for(int i=0;i<n;i++)
     scanf("%lld",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(binary_search(a,a+n,a[i]+k))
         c++;
    }
    printf("%lld\n",c);
}
