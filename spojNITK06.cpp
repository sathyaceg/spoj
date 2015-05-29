#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
              int n;
              scanf("%d", &n);
              int a[n+1];
              for(int i = 0; i < n; ++i)
                      scanf("%d", &a[i]);
              int i, f = 1;
              for(i = 0; i < n-1; ++i)
              {
                    if(a[i] > a[i+1])
                    {
                            f = 0;
                            break;
                    }
                    else
                    {
                        a[i + 1] = a[i+1] - a[i];
                        a[i] = 0;                        
                    }
              }
              if(!f)
              {
                    printf("NO\n");
                    continue;
              }
              for(i = 0; i < n; ++i)
              {
                    if(a[i] != 0)
                    {
                            f= 0;
                            break;
                    }
              }
              if(f)
               printf("YES\n");
              else
               printf("NO\n");
    }
}                
