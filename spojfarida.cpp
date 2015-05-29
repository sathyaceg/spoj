#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              long long int n;
              scanf("%lld",&n);
              long long int a[n+1],dp[n+1];
              for(int i=1;i<=n;i++)
               scanf("%lld",&a[i]);
              dp[0]=0;
              dp[1]=a[1];    
              for(int i=2;i<=n;i++)
              {
                                 dp[i]=max(dp[i-2]+a[i],a[i-1]);
              }             
              printf("%lld\n",dp[n]);
    }    
}
    
