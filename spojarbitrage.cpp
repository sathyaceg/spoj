#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int j = 1;
	while(1)
	{
		int n;
		cin >> n;
		if(n == 0)
		 break;
		vector <string> v;
		string a = "";
		double adj[35][35];
		map <string, int>mp;
		for(int i = 0; i < n; ++i)
		{
			cin >> a;
			v.push_back(a);
			mp[a] = i;
		}
		int m;
		cin >> m;
		string b = "";
		double r;				
		for(int i = 0; i <= n; ++i)
		 for(int j = 0; j <= n; ++j)
		  adj[i][j] = 0.0;		
		for(int i = 0; i < m; ++i)
		{			
			cin >> a;
			cin >> r;
			cin >> b;
			int u = mp.find(a)->second;
			int v = mp.find(b)->second;
			adj[u][v] = r;
		}
		for(int k = 0; k < n; ++k)															
		 for(int i = 0; i < n; ++i)							
		  for(int j = 0; j < n; ++j)		  
			 adj[i][j] = max(adj[i][j], adj[i][k]*adj[k][j]);						 											
		int f = 1;
		for(int i = 0; i < n; ++i)		
			for(int j = 0; j < n; ++j)						
				if(adj[i][i] < 1.0)
					f = 0;					
		if(f == 1)
			printf("Case %d: Yes\n", j);
		else
			printf("Case %d: No\n", j);
		j++;
	}
}
