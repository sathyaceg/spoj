#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int k;
		scanf("%d", &k);
		int key = k;
		if(k >= 26) 
		 k = k%26;
		string a;
		cin >> a;		
		for(int i = 0; i < a.size(); ++i)				
		{
			if(a[i] == '.')
			{			
			 a[i] = ' ';
			 continue;
			}
			char c; 
			if(a[i] > 90) 
			 c = 'z';
			else
			 c = 'Z';			 						
			if(c-a[i] < k)			
			{						 
			 if(c == 'z')			
			 a[i] = 'a'+ k-(c-a[i]+1);
			 else
			 a[i] = 'A' + k-(c-a[i]+1);				 
			}
			else
			 a[i]+=k;
			if(key >= 26)
			{
				if(a[i] >= 97)
				 a[i] = toupper(a[i]);
				else
				 a[i] = tolower(a[i]);
			}
		}
		cout << a << '\n';
	}
}
