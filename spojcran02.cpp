#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
              long long int n;
              scanf("%lld", &n);
              long long int a[n+1];
              map <long long int, long long int> m;
              scanf("%lld", &a[0]);
              m[a[0]]++;
              for(int i = 1; i < n; ++i)
              {
                      scanf("%lld", &a[i]);
                      a[i] = a[i] + a[i-1];
                      m[a[i]]++;
              }
              long long int ans = 0;
              for(map <long long int, long long int>:: iterator it = m.begin(); it!=m.end(); ++it)
              {
                      long long int c = (*it).second;
                      if((*it).first == 0)
                       ans+=c+((c*(c-1))/2;                            
                      else
                       ans+=((c*(c-1))/2;
              }
              printf("%lld\n", ans);
              m.clear();
    }
}
