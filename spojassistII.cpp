#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main()
{
	set <int> s;
	for(int i = 2; i <= 33850; ++i)
	 s.insert(i);
	int i = 0;
	int a[3008] = {0};		
	while(i < 3000 && !s.empty())
	{
		set <int> :: iterator it = s.begin();
		a[i++] = (*it);
		int k = (*it);		 
		int p = 0;		
		set <int> :: iterator it1, it2;						
		for(it1 = s.begin(); it1 != s.end(); it1 = it2, ++p)
		{
			it2 = it1; it2++;
			if(p%k == 0)
			 s.erase(it1);
		}
	}	
	while(1)
	{
		int n;		
		scanf("%d", &n);		
		if(n == 0)
		 break;
		cout << a[n-1] << '\n';
		
	}
}

