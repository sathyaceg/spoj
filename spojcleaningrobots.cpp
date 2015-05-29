#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

char a[55][55];
bool visited[55][55][(1 << 10)+1];
int ret = 0, c = 0, cost = 0, w, h;
map <pair <int, int>, int> m;
int arr1[] = {0, 0, 1, -1};
int arr2[] = {1, -1, 0, 0};

int solve(int i, int j, int mask)
{
	queue <int> q;
	q.push(i);
	q.push(j);
	q.push(mask);
	q.push(0);
	while(!q.empty())
	{
		int nx = q.front(); q.pop();
		int ny = q.front(); q.pop();
		int mask = q.front(); q.pop();
		int cost = q.front(); q.pop();
		if(visited[nx][ny][mask]) continue;
		visited[nx][ny][mask] = true;		
		bool can = true;
		if(a[nx][ny] == 'x') can = false;
		if(a[nx][ny] == '*' )
		{					
			int in = m[make_pair(nx, ny)];			
			mask |= (1 << in);			
		}
		if(mask == ((1 << c)-1)) {		
		 cout << mask << c << '\n';
		 return cost;
		}
		if(can)
		{
			for(int x = 0; x < 4; ++x)
			{
				int dx = nx + arr1[x];
				int dy = ny + arr2[x];
				if(dx >= 0 && dy >= 0 && dx < h && dy < w)
				 q.push(dx), q.push(dy), q.push(mask), q.push(cost+1);
			}
		}
	}
	return -1;
}

int main()
{
	while(1)
	{		
		cin>> w >> h;
		if(w == 0 && h == 0)
		 break;
		m.clear();
		for(int i = 0; i < h; ++i)
		 scanf("%s", a[i]);
		c = 0;
		memset(visited, false, sizeof(visited));
		for(int i = 0; i < h; ++i)
		{
			for(int j = 0; j < w; ++j)
			{
				if(a[i][j] == '*')
				 m[make_pair(i, j)] = c++;
			}
		}
		for(int i = 0; i < h; ++i)
		{
			for(int j = 0; j < w; ++j)
			{
				if(a[i][j] == 'o')
				{
					ret = solve(i, j, 0);
					goto radha;					
				}
			}
		}
		radha:;
		cout << ret << '\n';
	}
}
