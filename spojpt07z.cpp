#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
#include <climits>
#include <cstring>
#include <queue>

#define pii pair <int, int>
#define MAX 100005

using namespace std;

vector <int> g[MAX];
bool visited[MAX];
set <int> s;
int m = -1;
int b = -1;

void dfs(int x, int c)
{
     visited[x] = true;
     vector <int> :: iterator i;     
     if(c > m)
     {
      m = c;     
      b = x;
     }
     for(i = g[x].begin(); i != g[x].end(); ++i)
     {
           if(!visited[*i])           
            dfs((*i),c+1);                       
     }
}
           
int main()
{
       int n;
       scanf("%d", &n);
       int u, v;
       for(int i = 0; i < n - 1; ++i)
       {
               scanf("%d %d", &u, &v);
               g[u].push_back(v);
               g[v].push_back(u);
               s.insert(u);
               s.insert(v);
       }
       set <int> :: iterator it = s.begin();
       vector <int> :: iterator i;
       int m1 = INT_MIN;
       //for(; it != s.end(); ++it)
       {
             memset(visited, false, sizeof visited);
             m = -1;
             dfs((*it), 0);                
             memset(visited, false, sizeof visited);
             m = -1;
             dfs(b, 0);             
       }                    
       printf("%d\n", m);
}
