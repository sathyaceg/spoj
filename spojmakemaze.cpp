#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
#include <cstring>
#include <cstdlib>

using namespace std;

char a[25][25];
int arr1[] = {0, 0, 1, -1};
int arr2[] = {1, -1, 0, 0};
bool kousik[25][25] = {false};
int c = 0, m, n;

void kashyap(int i, int j)
{
     kousik[i][j] = true;   
     for(int x = 0; x < 4; ++x)
     {
             int nx = i + arr1[x];
             int ny = j + arr2[x];
             if(nx >= 0 && ny >= 0 && nx < m && ny < n && kousik[nx][ny] == false && a[nx][ny] == '.')
             {
                   if((nx == 0) || (nx == m-1) || (ny == 0) || (ny == n-1))                                                        
                    c++;                    
                   kashyap(nx, ny);
             }
     }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
              scanf("%d %d\n", &m, &n);
              memset(kousik, false, sizeof kousik);
              c = 0;
              int com = 0;
              for(int i = 0; i < m; ++i)
               gets(a[i]);              
              for(int i = 0; i < m; ++i)
              {
                      for(int j = 0;  j < n; ++j)
                      {                              
                              if((a[i][j] == '.'))  
                              {    
                               if((kousik[i][j] == false) && ( (i == 0) || (j == 0) || (j == n-1) || (i == m - 1)))
                                com++;                                                                                                    
                               if(((i == 0) || (j == 0) || (j == n-1) || (i == m - 1)) && kousik[i][j] == false)                                                                                                                                                                                                                                                
                                kashyap(i, j);                                                                                                                                                                
                              }                                  
                      }
              }                               
              if(c == 1 && com == 1)
               printf("valid\n");
              else
               printf("invalid\n");
    }
}                                                    
