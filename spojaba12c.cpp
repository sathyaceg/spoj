#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string.h>
#define INF 100000000
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t --)
    {
              int n,k;
              scanf("%d %d", &n , &k);
              int a[k+1];
              for(int i = 0; i < k; ++i)              
                      scanf("%d", &a[i]);
              int dp[k+2];      
              memset(dp,0,sizeof(dp));
              for(int i=0;i<=k;i++)
               dp[i]=INF;
              dp[0]=0;
              int pockets[k+1];              
              memset(pockets,0,sizeof(pockets));
              for(int i = 0; i <= k; ++i)
              {
                      for(int j=0; j<=k; ++j)
                      {
                              if(a[i]!=-1)
                              {
                              if((j-(i+1))>=0 && pockets[j-(i+1)]<=n-1 && dp[j-(i+1)]+a[i]<dp[j])
                              {
                                              dp[j]=dp[j-(i+1)]+a[i];
                                              pockets[j]++;
                              }
                              }
                      }
              }                
              if(dp[k]==INF)
               printf("-1\n");
              else 
               printf("%d\n",dp[k]);
    }
}                                                                                      
