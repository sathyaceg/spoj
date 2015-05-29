#include<iostream>
#include<stack>
#include<cstdio>
#include<algorithm>
using namespace std;
main()
{
      int n;
      scanf("%d",&n);
      int a[n],res=0,i=0;
      for(int i=0;i<n;i++)
              scanf("%d",&a[i]);
      stack <int> s;
      
      while(i<n)
      {
                if(s.empty() || a[s.top()]<=a[i])
                             s.push(i++);
                else
                {
                    int t=s.top();
                    s.pop();
                    res=max(res,a[t]*(s.empty() ? i : s.top()-i -1 ));
                }
      }
      while(!s.empty())
      {
                                       
                    int t=s.top();
                    s.pop();
                    res=max(res,a[t]*(s.empty() ? i : s.top()-i -1 ));
                
      }
      printf("%d\n",res);
}
