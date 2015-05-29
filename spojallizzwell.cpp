#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>
#include <climits>
#include <cstdio>

using namespace std;

char a[105][105];
bool kousik[105][105] = {false};
int r, c;
int arr1[] = {0, 0, 1, -1, 1, -1, 1, -1};
int arr2[] = {1, -1, 0, 0, 1, -1, -1, 1};
char all[] = "ALLIZZWELL";

bool kashyap(int i, int j, int co)
{
	if(co == 10)
	{
        return true;
    }      
     kousik[i][j] = true;         
     for(int x = 0; x < 8; ++x)
     {
             int nx = i + arr1[x];
             int ny = j + arr2[x];     
             if(nx >= 0 && ny >= 0 && nx < r && ny < c && kousik[nx][ny] == false)
             {                  
                   char c = all[co];                                     
                   if(a[nx][ny] == c)
                   {
                           if(kashyap(nx, ny, co + 1))
                           {
                           	//	kousik[i][j] = false;
                           		return true;
                           }                                
                   }
             }
     }
     kousik[i][j] = false;
     return false;
}    

int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
            scanf("%d %d", &r, &c);
            int ma = 0;            
            int co = 0;
            for(int i = 0; i < r; ++i)
             scanf("%s", a[i]);
            memset(kousik, 0, sizeof kousik);
            for(int i = 0; i < r; ++i)
            {
                    for(int j = 0; j < c; ++j)
                    {
                            if(a[i][j] == 'A')
                            {
                                       co = 1;      
                                       memset(kousik, 0, sizeof kousik);
                                       bool b = false;
                                       b = kashyap(i, j, co);
                                       if(b == true)
                                       {
                                          printf("YES\n");
                                          goto raj;
                                       }                                 
                            }
                                                                                               
                    }
            }            
            printf("NO\n");
            raj:; 
    }
}  


