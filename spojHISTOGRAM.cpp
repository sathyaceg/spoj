#include<iostream>
#include<algorithm>
#include<stack>
#include<cstdio>
using namespace std;
int main()
{
    while(1)
    {
            long long int n;
            scanf("%lld", &n);
            if(n==0)
             break;
            long long int a[n+1];
            for(long long int i = 0; i < n; ++i)
             scanf("%lld", &a[i]);
            stack < long long int > s;
            long long int res = 0;
            long long int i=0;
            while(i < n)
            {
                    if( s.empty() || a[ s.top() ] <= a[i] )
                     s.push(i++);
                    else
                    {
                        long long int t = s.top();
                        s.pop();
                        if(s.empty())
                         res = max(res,a[t]*i);
                        else
                         res = max(res,a[t]*(i-s.top()-1));
                        cout << "RES:" << res << " T:" << a[t] << '\n';
                    }
            }
            while(!s.empty())
            {                        
                    {
                        long long int t = s.top();
                        s.pop();
                        if(s.empty()) {                        
                         res = max(res,a[t]*i);
                         cout << "HERE\n";
                     	}
                        else
                         res = max(res,a[t]*(i-s.top()-1));            
						cout << "res:" << res << " T:" << a[t] << '\n';            
                    }   
            }
            printf("%lld\n",res);
    }
}
