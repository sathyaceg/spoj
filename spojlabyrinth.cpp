#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int maxd, maxc, maxr;
int arr1[] = {0, 0, 1, -1};
int arr2[] = {1, -1, 0, 0};
int r, c;
bool v[1005][1005];
char a[1005][1005];

void sathya(int l, int i, int j)
{
     if(l > maxd)
     {
          maxd = l;
          maxr = i;
          maxc = j;
     } 
     v[i][j] = true;
     for(int x = 0; x < 4; ++x)
     {
             int nx = i + arr1[x];
             int ny = j + arr2[x];
             if(nx >= 0 && ny >=0 &&  nx < r && ny < c && v[nx][ny] == false && a[nx][ny] == '.')
              sathya(l+1, nx, ny);
     }
}                        
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
              scanf("%d %d\n", &c, &r);              
              for(int i = 0; i < r; ++i)
               gets(a[i]);
              for(int i = 0; i < r; ++i)
              {
                      for(int j = 0; j < c; ++j)
                      {
                              if(a[i][j] == '.')
                              {
                                         memset(v, false, sizeof(v));                                                                                     
                                         maxd = -1;                                         
                                         sathya(0, i, j);      
                                         maxd = -1;
                                         memset(v, false, sizeof(v));
                                         sathya(0, maxr, maxc);
                                         printf("Maximum rope length is %d.\n", maxd);
                                         goto ext;
                              }
                      }
              }                     
              ext:;                                           
    }
}
    


