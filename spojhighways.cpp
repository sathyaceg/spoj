#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<algorithm>
#include<string>
#include<sstream>
#include<string.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

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
#define pii pair<int,int>
#define MAX 1000010
#define INF 2147483647
#define pb(x) push_back(x)

vector<  pii >vp[MAX];
int d[MAX],f[MAX];
int main()
{
    int t;
    scanf("%d",&t);   
    while(t--)
    {
              int n,m,st,en;              
              scanf("%d%d%d%d",&n,&m,&st,&en);
              int u,v,w;
              fle(0,n+1)
              {
                        d[i]=INF;
                        f[i]=0;
                        vp[i].clear();
              }
              fl(0,m)
              {
                     scanf("%d%d%d",&u,&v,&w);
                     vp[u].pb(pii(w,v));
                     vp[v].pb(pii(w,u));              
              }                            
              d[st]=0;int size;
              priority_queue< pii,vector< pii >,greater< pii > >Q;
              Q.push(pii(0,st));
              while(!Q.empty())
              {
                               u=Q.top().second;
                               int wn=Q.top().first;
                               Q.pop();
                               size=vp[u].size();
                               fl(0,size)
                               {
                                      v=vp[u][i].second;
                                      int we=vp[u][i].first;                                                                        
                                      if(d[v]>=wn+we && !f[v])
                                      {
                                                      d[v]=wn+we;
                                                      Q.push(pii(d[v],v));
                                      }
                               }
                               f[u]=1;
                               if(u==en)
                                break;
              }
              if(d[en]==INF)
               ps("NONE\n");
              else{
               pi(d[en]);pc('\n');              
              }
    }
}

