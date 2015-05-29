#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <queue>
#include <climits>

using namespace std;

#define INF 1<<30
char a[185][185];
int g[185][185];
int n, m;
int arr1[] = {0, -1, 0, 1};
int arr2[] = {-1, 0, 1, 0};
int dis;
int inx, iny;

void bfs(int i, int j)
{
     queue <pair <int, int> > radha;
     radha.push(make_pair(i, j));
     while(!radha.empty())
     {
                      int x = radha.front().first;
                      int y = radha.front().second;    
                      radha.pop();
                      for(int l = 0; l < 4; ++l)
                      {
                              int nx = x + arr1[l];
                              int ny = y + arr2[l];
                              if(nx < n && nx >= 0 && ny < m && ny >= 0)
                              {                                    
                                    dis = abs(nx - inx) + abs(ny - iny);
                                    if(dis < g[nx][ny])
                                    {
                                      g[nx][ny] = dis;     
                                      radha.push(make_pair(nx, ny));
                                    }
                              }
                                    
                      }
     }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
              scanf("%d %d\n", &n, &m);
              for(int i = 0; i < n; ++i)
                      gets(a[i]);   
              for(int i = 0; i < n; ++i)
               for(int j = 0; j < m; ++j)
                 g[i][j] = (a[i][j] == '0')?INF:0;  
              for(int i = 0; i < n; ++i)              
               for(int j = 0; j < m; ++j) 
               {                     
                if(a[i][j] == '0')
                {
                 inx = i, iny = j;
                 bfs(i, j);
                }
               }
               for(int i = 0; i < n; ++i)
               {
                       for(int j = 0; j < m; ++j)
                       {
                               printf("%d ", g[i][j]);
                       }printf("\n");
               }                                
    }
}              
