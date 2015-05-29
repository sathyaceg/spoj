#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>
#include <climits>
#include <cstdio>

using namespace std;

char a[55][55];
bool kousik[55][55] = {false};
int r, c;
int arr1[] = {0, 0, 1, -1, 1, -1, 1, -1};
int arr2[] = {1, -1, 0, 0, 1, -1, -1, 1};
int l = 1;

void kashyap(int i, int j, int co)
{
     if(co > l)
      l = co;     
     kousik[i][j] = true;
     for(int x = 0; x < 8; ++x)
     {
             int nx = i + arr1[x];
             int ny = j + arr2[x];
             if(nx >= 0 && ny >= 0 && nx < r && ny < c && kousik[nx][ny] == false)
             {     
                   if(a[nx][ny] == (a[i][j] + 1))
                   {
                           kashyap(nx, ny, co + 1);                                        
                   }
             }
     }
}    

int main()
{
    int cases = 1;
    while(1)
    {
            scanf("%d %d", &r, &c);
            if(r == 0 && c == 0)
             break;
            int ma = 0;            
            int co = 0;
            for(int i = 0; i < r; ++i)
             scanf("%s", a[i]);
            for(int i = 0; i < r; ++i)
            {
                    for(int j = 0; j < c; ++j)
                    {
                            if(a[i][j] == 'A')
                            {
                            		memset(kousik, 0, sizeof kousik);
                                       co = 1;
                                       l = 1;
                                       kashyap(i, j, co);   
                                        ma = max(ma, l);
                            }
                                                                                               
                    }
            }            
            printf("Case %d: %d\n", cases, ma);
            cases++;
    }
}  

