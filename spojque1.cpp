#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

struct s
{
	int x, y;
	 bool operator<(const s &p) const {
        return x<p.x;
    }
};
s a[1005];
int main()
{
	int cases;
	cin >> cases;
	while(cases--)
	{
		int n;
		cin >> n;
		for(int i = 0; i < n; ++i)		
			cin >> a[i].x;
		for(int j = 0; j < n; ++j)		
			cin >> a[j].y;
		int ret[n+1];
		sort(a, a+n);
		memset(ret, -1, sizeof(ret));
		for(int i = 0; i < n; ++i)
		{
			int c = a[i].y;
			for(int j = 0; j < n; ++j)
			{
				if(c == 0 && ret[j] == -1)
				{
					ret[j] = a[i].x;
					 break;
				}
				if(ret[j] == -1) c--;
			}
		}
		for(int i = 0; i < n; ++i)
		 cout << ret[i] << ' ';
		cout << '\n';
	}
}
