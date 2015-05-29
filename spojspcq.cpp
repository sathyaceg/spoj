#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int cases;
	scanf("%d", &cases);
	while(cases--)
	{
		unsigned long long int a, b, sum;
		cin >> a;		
		while(1)
		{		
			b = a;
			sum = 0;
			string t = "";
			while(b)
			{
				t+=((b%10)+'0');
				b/=10;
			}
			reverse(t.begin(), t.end());
			for(int i = 0; i < t.size(); ++i)
		 		sum+=(t[i]-'0');
			if(a % sum == 0)
			{
				cout << a << '\n';
				break;
			}
			a++;
		}
	}
}
