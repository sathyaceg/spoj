#include <iostream>
#include <queue>
#include <algorithm>
#include <cstdio>

using namespace std;

#define all(x) x.begin(), x.end()
bool bfs(int a)
{
     queue <unsigned long long int> q;
     q.push(a);
     for(int i = 2; i <=9; ++i)
     {
             a*=i;
             unsigned long long int num = a;
             string s = "";
             while(num > 0)
             {
                       s+=((num%10)+'0');
                       num/=10;
             }
             reverse(all(x));
             int j;
             for(j = 0; j < s.size(); ++j)
             {
                     if(s[0] != '1')
                      break;
                     if(s[i] != '1' && s[i] != '0') 
                      break;
             }
             if(j == s.size())  
              return true;   
             q.push(a);
     }
     while(!q.empty())
     {
                      unsigned long long int x = q.top();
                      q.pop();
                                            
}
               
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
              unsigned long long int a;
              scanf("%ulld", &a);
              bfs(a);
