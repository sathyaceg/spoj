#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <climits>

using namespace std;

int n, m;
char a[30][30];
bool visited[30][30] = {false};
int d[30][30] = {0};
int arr1[] = {0, 0, 1, -1};
int arr2[] = {1, -1, 0, 0};
int ret = INT_MAX;

int dfs(int i, int j, int c)
{	
	visited[i][j] = true;	
	for(int x = 0; x < 4; ++x)
	{
		int nx = i + arr1[x];
		int ny = j + arr2[x];
		if(nx >=0 && ny >=0 && nx < m && ny < n && isdigit(a[nx][ny]) && visited[nx][ny] == false)
		{
			d[nx][ny] = c+a[nx][ny]-'0';
			dfs(nx, ny, c+a[nx][ny]-'0');			
		}	
		else if(nx >= 0 && ny >= 0 && nx < m && ny < n && visited[nx][ny] == true && isdigit(a[nx][ny]))
		{			
			if(c+a[nx][ny] - '0' < d[nx][ny])
			{			
				d[nx][ny] = c+a[nx][ny]-'0';
				visited[nx][ny] = false;
				dfs(nx, ny, c+a[nx][ny]-'0');
			}			
		}
		else if(nx >= 0 && ny >= 0 && nx < m && ny < n && a[nx][ny] == 'D')	
			ret = min(ret, c);							
	}
}

int main()
{
	while(1)
	{
		cin >> n >> m;
		if(n == 0 && m == 0)
		 break;
		for(int i = 0; i < m; ++i)
		 cin >> a[i];
		int ans  = INT_MAX;
		memset(visited, false, sizeof visited);
		memset(d, 0, sizeof d);
		ret = INT_MAX;
		for(int i = 0; i < m; ++i)
		{
			for(int j = 0; j < n; ++j)			
				if(a[i][j] == 'S')
				 dfs(i, j);																																						
		}
		hell:;
		cout << ret << '\n';
	}
}
