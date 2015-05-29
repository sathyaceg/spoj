#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, e;
		scanf("%d %d", &n, &e);
		if(e == 0)
		{
			printf("%d\n", n);
			continue;
		}
		int a[n+1], c = 0;
		int f1, f2;
		for(int i = 0; i < n; ++i)
		 a[i] = 0;
		vector <pair <int, int> > v;
		pair <int, int> p;
		for(int i = 0; i < e; ++i)
		{
			scanf("%d %d", &f1, &f2);
			p = make_pair(f1, f2);
			v.push_back(p);
		}
		vector <pair <int, int> >:: iterator it = v.begin();
		for(; it != v.end(); ++it)
		{
			f1 = (*it).first;
			f2 = (*it).second;							
			if(a[f1] == 0 && a[f2] == 0)
			{	
				c++;
				a[f1] = c;
				a[f2] = c;
			}
			else if(a[f1] == 0 && a[f2] != 0)
			 a[f1] = a[f2];
			else if(a[f1] != 0 && a[f2] == 0)
			 a[f2] = a[f1];
			vector <pair <int, int> >:: iterator it1 = it;		
			it1++;
			int flag1 = 0, flag2 = 0;
			for(; it1 != v.end(); ++it1)
			{	
				int t1 = a[f1];
				int t2 = a[f2];	
				flag1 = 0, flag2 = 0;				
				if(f1 == (*it1).first || f1 == (*it1).second)
				{					
					if(f1 == (*it1).first)
					{
						if(a[(*it1).second] == 0)					
						 a[(*it1).second] = a[f1];
						else						
						 a[(*it1).second] = a[f1] = min(a[f1], a[(*it1).second]);
					}
					else
					{					
					    if(a[(*it1).first] == 0)
						 a[(*it1).first] = a[f1];
						else
						 a[(*it1).first] = a[f1] = min(a[f1], a[(*it1).first]);
					}
					if(a[f1] != t1)
					 flag1 = 1;
				}					
				if(f2 == (*it1).first || f2 == (*it1).second)				
				{					
					if(f2 == (*it1).first)
					{					
						if(a[(*it1).second] == 0)	
						 a[(*it1).second] = a[f2];
						else
						 a[(*it1).second] = a[f2] = min(a[f2], a[(*it1).second]);											
					}
					else
					{					
					    if(a[(*it1).first] == 0)
						 a[(*it1).first] = a[f2];
						else
						  a[(*it1).first] = a[f2] = min(a[f2], a[(*it1).first]);
					}
					if(a[f2] != t2)
					 flag2 = 1;
				}
				if(flag1 && !flag2)
				 a[f2] = a[f1];
				if(flag2 && !flag1)
				 a[f1] = a[f2];
				if(flag1 || flag2)
				 c--;
			}							
		/*	for(int i = 0; i < n; ++i)
		 		cout << a[i] << ' ';
			cout << '\n';	*/		
		}
		for(int i = 0; i < n; ++i)
		 cout << a[i] << ' ';
		cout << '\n';
		for(int i = 0; i < n; ++i)
		 if(a[i] == 0)	
		  c++;			
		printf("%d\n", c);
	}
}

