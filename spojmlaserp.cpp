#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <climits>
#include <map>
#include <vector>
#include <climits>
#include <queue>

using namespace std;

int w, h, x1, x2, y1, y2;
char a[105][105];
bool visited[105][105][105] = {false};
int arr1[] = {-1, +0, +1, +0, +1, +1, -1, -1};
int arr2[] = {+0, -1, +0, +1, +1, -1, -1, +1};
int f1 = 0, f2 = 0;

struct s1
{
	public:
	int x, y, d, c;
	 s1(int x1, int y1, int d1, int c1)
        : x(x1), y(y1), d(d1), c(c1) {}    
	 bool operator < (const s1 &s) const {
        return c > s.c;
    }   
};

int djikstra(int i, int j)
{	
	priority_queue <s1> q;	
	q.push(s1(i, j, 0, 0));
	while(!q.empty())
	{
		int u = q.top().x;
		int v = q.top().y;
		int d = q.top().d;
		int c = q.top().c;		
		q.pop();		
		if(u == x2 && v == y2)				 
		 return c;		
		if(visited[u][v][d])
		 continue;
		visited[u][v][d] = true;
		if(d == 0)
		{
			for(int x = 0; x < 4; ++x)
			{
				int nx = u + arr1[x];
				int ny = v + arr2[x];
				if(nx >= 0&& ny >= 0&& nx < h && ny < w && a[nx][ny] != '*')
				{
				 //s1 o1(nx, ny, x+1, c);				
				 q.push(s1(nx, ny, x+1, c));
				}
			}
		}
		else
		{
			for(int x = 0; x < 4; ++x)
			{
				int nx = u + arr1[x];
				int ny = v + arr2[x];
				if(nx >= 0&& ny >= 0&& nx < h && ny < w && a[nx][ny] != '*')
				{
					if(x+1 != d)
					{
					 //s1 o2(nx, ny, x+1, c+1);						
					 q.push(s1(nx, ny, x+1, c+1));
					}
					else
					{					
					  //s1 o3(nx, ny, x+1, c);	
					 q.push(s1(nx, ny, x+1, c));
					}
				}
			}
		}		 
	}
	return 0;
}

int main()
{
	cin >> w >> h;
	for(int i = 0; i < h; ++i)
	 cin >> a[i];
	f1 = 1, f2 = 0;
	bool one = false;
	int c= 0;
	for(int i = 0; i < h; ++i)
	{
		for(int j =0 ; j < w; ++j)
		{
			if(a[i][j] == 'C')
			{
				if(c==0)				
				 c++;
				else 
				{
					x2 = i;
					y2 = j;					
					break;
				}
			}
		}
	}
	int ans = 0;	
	for(int i = 0; i < h; ++i)
	{
		for(int j = 0; j < w; ++j)
		{
			if(a[i][j] == 'C')
			{			
				ans = djikstra(i, j);
				goto topcoder;
			}
		}
	}	
	topcoder:
	cout << ans << '\n';	
	
}
