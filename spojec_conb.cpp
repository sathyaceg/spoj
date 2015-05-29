#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
              unsigned long long int a;
              scanf("%ulld", &a);
              if(a & 1)
               printf("%ulld\n", a);
              else
              {
                  int a[100000000];
                  int k = 0;
                  unsigned long long int n = a;
                  while(n > 0)
                  {
                          a[k++] = n%2;
                          n/=2;
                  }
                  --k;
                  while(a[k] == 0)
                   k--;
                 unsigned long long int b = 0;
                 for(int i = k; i >= 0; i--)
                 {
                         b+=(a[i]*pow(2, i);
                 }
                 printf("%ulld\n", b);
    }
}
                          
