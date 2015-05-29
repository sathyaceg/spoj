#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    int p[10005] = {0};
    int a[10005] = {0};
    int j = 0;
    for(int i = 2; i <= 10004; ++i)
    {
            if(a[i] == 0)
            {
                    for(int l = 2*i; l <= 10004; l+=i)
                    {
                            a[l] = 1;
                    }
            }
    }
    for(int i = 2; i <= 10004; ++i)
    {
            if(a[i] == 0)
             p[j++] = i;
    }
    int t;
    scanf("%d", &t);
    bool v[10005] = {false};
    int d[10005] = {-1};        
    while(t--)
    {
              int n1, n2;
              scanf("%d %d", &n1, &n2);
              memset(v, false, sizeof v);
              memset(d, -1, sizeof d);
              queue <int> q;
              q.push(n1);
               v[n1] = true;
              int m1 = n1, m2;    
              d[n1] = 0;          
              while(!q.empty() && q.front() != n2)
              {
                      int b = q.front();                     
                      q.pop();
                      int arr1[4], arr2[4];
                      int k = 3;
                      m1 = b;
                      while(m1 > 0)
                      {
                               arr1[k--] = m1%10;
                               m1/=10;
                      }
                      m2 = 0; 
                      for(int i = 0; i < 4; ++i)
                       arr2[i] = arr1[i]; 
                      int x;            
                      for(j = 0; j < 4;  ++j)
                      {                      
                              m2 = 0;   
                              int inc = 1;           
                              if(j == 3)
                               inc = 2;
                              else
                               inc = 1; 
                              int i;                                                        
                              if(j == 0 || j == 3)
                               i = 1; 
                              else
                               i = 0;
                              x = arr1[j];
                      for(; i <= 9; i+=inc)                                                                  
                      {              
                              arr1[j] = i;                      
                              m2 = 0;
                              for(int l = 0; l < 4; ++l)                                                            
                                      m2 = (m2 * 10) + arr1[l];                                                           
                              if(v[m2] == false && a[m2] == 0 && m2 != b)
                              {                              
                                q.push(m2);                                                                                
                                v[m2] = true;
                                d[m2] = d[b] + 1;
                                if(m2 == n2){                                 
                                 printf("%d\n", d[n2]);
                                 goto poda;}
                              }
                      } 
                      arr1[j] = x;
                      }
              }
              printf("%d\n", d[n2]);
              poda:;                  
    } 
}                                                                                                                                                                                                  
