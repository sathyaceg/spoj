#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int a[1000006] = {0};
int p[1000006] = {0};

int main()
{
    int j = 0;
    long long int max = (long long int)sqrt(1000000000000);
    for(int i = 2; i <= max; ++i)
    {
            if(a[i] == 0)
            {
                    for(int l = 2*i; l <= max; l+=i)
                    {
                            a[l] = 1;
                    }
            }
    }
    for(int i = 2; i <= max; ++i)
    {
            if(a[i] == 0)
             p[j++] = i;
    }
    int t;
    scanf("%d", &t);
    while(t--)
    {
              long long int m, n;
              scanf("%lld %lld", &m , &n);
              if(m == 1)
               m++;
              int f = 0;
              long long int temp;
              for(long long int i = m; i <= n; ++i)
              {
                      f = 0;
                      temp = (long long int)sqrt(i);
                      for(long long int l = 0; p[l] <= temp && l < j; ++l)
                      {
                              if(i % p[l] == 0)
                              {
                               f = 1;    
                               break;
                              }
                      }                      
                     if(f == 0)
                      printf("%lld\n", i);
              }
              printf("\n");
    }
}
