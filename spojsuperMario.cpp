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
#include <climits>

using namespace std;

vector <vector <string> > v;
int n, m, w;
bool visited[10][20][20][(1 << 10) + 5];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
map < pair <int, pair <int,int> >, int > index1;
int c = 0;

int solve(int wor, int i, int j, int mask)
{
	queue <int> q;
	q.push(i),q.push(j),q.push(mask),q.push(0),q.push(wor);
	int ret = INT_MAX;
	while(!q.empty())
	{			
		int curx = q.front(); q.pop();
		int cury = q.front(); q.pop();
		int mask = q.front(); q.pop();
		int cost = q.front(); q.pop();	
		int world = q.front(); q.pop();	
		if(visited[world][curx][cury][mask]) continue;		
		visited[world][curx][cury][mask] = 1;					
		bool can=true;
		if(world == 0 && v[world][curx][cury] == 'U') continue;
		if(world == w-1 && v[world][curx][cury] == 'D') continue;
		if(v[world][curx][cury] == '#')  can = false;		
		if(v[world][curx][cury] == 'C')
		{			
			int ind = index1[make_pair(world, make_pair (curx, cury))];			
			mask |= (1 << ind);			
		}	
		if(v[world][curx][cury] == 'M' &&  mask != (1 << c ) - 1) can=false;			
		if(v[world][curx][cury] == 'M' && mask == (1 << c)-1) return cost;
		if(can)
		{			
			if(v[world][curx][cury] == 'D' || v[world][curx][cury] == 'U')
			{
				if(curx >= 0 && cury >= 0 && curx < n && cury < m && v[world][curx][cury] == 'D' && world >= 0 && world+1 < w && v[world+1][curx][cury] != '#')
				{				
					q.push(curx), q.push(cury), q.push(mask), q.push(cost), q.push(world + 1);					
				}
				else if(curx >= 0 && cury >= 0 && curx < n && cury < m && v[world][curx][cury] == 'U' && world-1 >= 0 && world < w && v[world-1][curx][cury] != '#')
					q.push(curx), q.push(cury), q.push(mask), q.push(cost), q.push(world - 1);
			}
			else			
			for(int ii = 0; ii < 4;ii++)
			{
				int nx = curx + dx[ii] , ny= cury + dy[ii];
				if(nx >= 0 && ny >= 0 && nx < n && ny < m && v[world][nx][ny] != 'D' && v[world][nx][ny] != 'U' && world >= 0 && world < w)
					q.push(nx), q.push(ny), q.push(mask), q.push(cost+1), q.push(world);
				else if(nx >= 0 && ny >= 0 && nx < n && ny < m && v[world][nx][ny] == 'D' && world >= 0 && world+1 < w && v[world+1][nx][ny] != '#')
				{				
					q.push(nx), q.push(ny), q.push(mask), q.push(cost+1), q.push(world + 1);					
				}
				else if(nx >= 0 && ny >= 0 && nx < n && ny < m && v[world][nx][ny] == 'U' && world-1 >= 0 && world < w && v[world-1][nx][ny] != '#')
					q.push(nx), q.push(ny), q.push(mask), q.push(cost+1), q.push(world - 1);
			}
		}
	}	
	return ret;
}

int main()
{	
	while(1)
	{	
		cin >> n >> m >> w;
		if(n == 0 && m == 0 && w == 0)
		 break;
		string a;
		vector <string> vec;
		v.clear();
		index1.clear();
		int ip = 0;
		for(int i = 0; i < n*w; ++i)
		{
			cin >> a;
			ip++;
			vec.push_back(a);		
			if(ip == n)
			{
				v.push_back(vec);
				vec.clear();
				ip = 0;
			}
		}	
		c = 0;
		memset(visited, false, sizeof visited);
		for(int i = 0; i < w; ++i)
		{
			vec = v[i];
			for(int j = 0; j < n; ++j)
			{				
				for(int k = 0; k < m; ++k)
				{
					if(vec[j][k] == 'C')
					 index1[make_pair(i, make_pair(j, k))] = c++;
				}
			}
		}		
		int result;	
		for(int wor = 0; wor < w; ++wor)	
		for(int i = 0; i < n; ++i)		
			for(int j = 0; j < m; ++j)
			{
				if(v[wor][i][j] == 'S')
				{					
		    		result=solve(wor, i, j, 0);
					goto sita;
				}
			}
		sita:;
		if(result != INT_MAX)
			printf("Mario saved the princess in %d steps\n", result);
		else
			printf("Mario failed to save princess\n");
	}
}

