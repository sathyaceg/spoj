#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
#include <climits>
#include <cstring>
#include <queue>
#include <string>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
              long long int a, b, j = 1;
              scanf("%lld", &a);
              long long int n = a;
              string s = "";
              while(1)
              {   
              s = "";
              b = a * j;          
              j++;
              n = b;           
              while(n > 0)
              {
                      s+=((n%10)+'0');
                      n/=10;
              }
              reverse(s.begin(), s.end());
              if(s[0] != '1')
               continue;
              int i;
              for(i = 1; i < s.size(); ++i)
              {
                      if(s[i] != '1' && s[i] != '0')
                       break;
              }
              if(i == s.size())
              {
               cout << s << '\n';
               break;
              }
              }
    }
}
