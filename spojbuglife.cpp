#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string>
#include<sstream>
#include<queue>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define ll long long int 
#define ull unsigned long long int 
#define ri(x) scanf("%d",&x)
#define rl(x) scanf("%ld",&x)
#define rll(x) scanf("%lld",&x)
#define rull(x) scanf("%lld",&x)
#define rc(x) scanf("%c",&x)
#define rs(x) scanf("%s",x)
#define pi(x) printf("%d",x)
#define pl(x) printf("%ld",x)
#define pll(x) printf("%lld",x)
#define pull(x) printf("%lld",x)
#define pc(x) printf("%c",x)
#define ps(x) printf(x)
#define fl(s,e) for(int i=s;i<e;i++)
#define fle(s,e) for(int i=s;i<=e;i++)
#define flv(v,it) for((it)=v.begin();(it)!=v.end();(it)++)
#define all(x) (x).begin(),(x).end()
using namespace std;
int g[2005][2005];
int main()
{
    int t;
    ri(t);
    for(int j=1;j<=t;j++)
    {
              int n,m,u,v;
              ri(n);ri(m);
              for(int i=0;i<=n;i++)
               for(int j=0;j<=n;j++)
                g[i][j]=0;
              for(int i=0;i<m;i++)
              {
                      ri(u);
                      ri(v);
                      g[u][v]=1;
                      g[v][u]=1;
              }
              int c[2005],f=0;
              for(int i=1;i<=n;i++)
               c[i]=-1;  
              for(int k=1;k<=n;k++)
              {
              if(c[k]!=-1)
               continue;
              queue<int>q;
              q.push(k);
              while(!q.empty())
              {
                      u=q.front();                
                      q.pop();
                      for(int v=1;v<=n;v++)
                      {
                              if(g[u][v] && c[v]==-1)
                              {
                                         c[v]=1-c[u];
                                         q.push(v);
                              }
                              else if(g[u][v] && c[v]==c[u])
                              {
                                   f=1;
                                   break;
                              }
                      }
                      if(f)
                       break;
              }
              if(f)
               break;
              }
              if(f)
              {
               printf("Scenario #%d:\n",j);
               ps("Suspicious bugs found!\n");
              }
              else
              {
               printf("Scenario #%d:\n",j);
               ps("No suspicious bugs found!\n");
              }
    }
}
