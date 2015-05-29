#include <iostream>
#include <cstring>
#include <cstdio>
#include <queue>

#define MOD 2147483647

using namespace std;

char a[1005][1005];
int dp[1005][1005];
bool radha[1005][1005];
bool kousik[1005][1005];
int arr1[] = {0, 1};
int arr2[] = {1, 0};
int arr3[] = {0, -1, 0, 1};
int arr4[] = {-1, 0, 1, 0};

void bfs(int n)
{
     queue <pair <int, int> > q;
     q.push(make_pair(0, 0));
     memset(radha, 0, sizeof(radha));
     while(!q.empty())
     {
                      int i = q.front().first;
                      int j = q.front().second;
                      q.pop();
                      if(radha[i][j]) continue;
                      radha[i][j] = true;
                      for(int x = 0; x < 2; ++x)
                      {
                                                    int nx = i + arr1[x];
                                                    int ny = j + arr2[x];                      
                                                    if(nx < n && ny < n && nx >= 0 && ny >= 0 && a[nx][ny] == '.')
                                                     q.push(make_pair(nx, ny));
                      }
     }
}                           

void sathya(int n)
{
     queue <pair <int, int> >q;
     q.push(make_pair(0, 0));
     memset(kousik, 0, sizeof(kousik));
     while(!q.empty())
     {
                      int i = q.front().first;
                      int j = q.front().second;
                      q.pop();
                      if(kousik[i][j]) continue;
                      kousik[i][j] = true;
                      for(int x = 0; x < 4; ++x)
                      {
                              int nx = i + arr3[x];
                              int ny = j + arr4[x];              
                              if(nx < n && ny < n && nx >= 0 && ny >= 0 && a[nx][ny] == '.')
                               q.push(make_pair(nx, ny));
                      }
     }
}

int main()
{
	int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
     scanf("%s", a[i]);
    if(a[0][0] == '#')
     dp[0][0] = 0;
    else
     dp[0][0] = 1;
    for(int i = 1; i < n; ++i)
    {
            if(a[0][i] == '.')
             dp[0][i] = dp[0][i-1];
            else
             dp[0][i] = 0;
    } 
    for(int j = 1; j < n; ++j)
    {
            if(a[j][0] == '.')
             dp[j][0] = dp[j-1][0];
            else 
             dp[j][0] = 0;
    }
    for(int i = 1; i < n; ++i)
    {
            for(int j = 1; j < n; ++j)
            {
                    if(a[i][j] == '.')
                    {
                               dp[i][j] = ((long long)((long long)dp[i][j-1] + (long long)dp[i-1][j]))%MOD;
                    }
                    else
                               dp[i][j] = 0;
            }
    }    
    bfs(n);
    if(dp[n-1][n-1] == 0 && radha[n-1][n-1] == false)
    {
                    sathya(n);                                                           
                    if(kousik[n-1][n-1] == true)
                     printf("THE GAME IS A LIE\n");
                    else
                     printf("INCONCEIVABLE\n");
    }
    else
        printf("%d\n", dp[n-1][n-1]%MOD);
}
