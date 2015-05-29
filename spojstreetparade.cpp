#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <climits>
#include <map>
#include <vector>
#include <climits>
#include <queue>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	while(1)
	{
		int n;
		scanf("%d", &n);
		if(n == 0)
		 break;
		vector <int> a;		
		stack <int> s, s1;
		int ans[n+1];
		int m = n;
		for(int i = 0; i < n; ++i)
			ans[i] = i+1;						
		int num;
		for(int i = 0; i < n; ++i)
			scanf("%d", &num), s.push(num);		
		int pos[n+1];
		while(!s.empty())				
			a.push_back(s.top()), s.pop();
		n = a.size();
		for(int i = 0; i < a.size(); ++i)
		 pos[a[i]] = i;
		int c = 0;
		cout <<"ARR:" ;
		for(int j = n-1; j >= 0; --j)
		 cout << a[j] << ' ';
		cout << '\n';		
		for(int j = n-1; j >= 0; --j)
		{
			//cout << "HERE:\n";			
			if(pos[a[j]] != n-a[j])
			{
				cout << "HERE:";
				cout << "A{J}:" << a[j] << '\n';
				if(n == 1)
				{				
				 s.push(a[j]); continue;}
				if(!s1.empty() && (s1.top() < a[j]))
				{
					cout << "THERE:" << a[j] << "\n";
					int val1 = s1.top();
					s1.pop();
					s.push(val1);					
				}
				s1.push(a[j]);			
				n--;
			}
			else s.push(a[j]);
		}		
		while(!s.empty())
		{
			int dei = s.top();
			//s1.push(dei);
			s.pop();
			cout << dei;
		}
		cout << '\n';
		while(!s1.empty())
		 cout << s1.top(), s1.pop();
		/*stack <int> ret;
		while(!s.empty())
		{			
			int a = s.top();
			if(s1.top() > s.top())			
			{			
				s1.push(a);
				s.pop();
			}
			else
				break;
		}	
		int i = 0;	
		while(!s.empty() || !s1.empty())
		{			
			if(!s.empty() && !s1.empty() && s1.top() > s.top())
			{				
				int val = s.top();
				s1.push(val);
				s.pop();
			}
			else if(!s.empty() && !s1.empty() && s1.top() < s.top())			
			{
				int val = s1.top();
				ret.push(val);
				s1.pop();
			}
			if(s.empty() && !s1.empty())
			{
			 	int	val = s1.top();		
			 	ret.push(val);
			 	s1.pop();
			}
			if(s1.empty() && !s.empty())
			{
				int val = s.top();
				ret.push(val);
				s.pop();
			}			
		}
		while(!ret.empty())
		{
			int val = ret.top();
			if(val != ans[i])
			 break;
			i++, ret.pop();
		}
		if(ret.empty())
		 cout << "yes\n";
		else
		 cout << "no\n";*/
	}
}
