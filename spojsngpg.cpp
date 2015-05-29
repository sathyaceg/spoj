#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
              int a, b, c = 0;
              scanf("%d %d", &a, &b);
              for(; a <= 4 && a <= b; ++a)
              {
                    if(a == 0)
                     c++;
                    if(a == 1)
                      c++;                    
                    if(a == 2)
                      c++;
                    if(a == 3) 
                     c++;
              }                                          
              printf("%d\n", c);
    }
}
