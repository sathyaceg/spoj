#include <iostream>
#include <map>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <queue>
#include <climits>

using namespace std;

#define INF 100000000

char v[1005][1005];
bool visited[1005][1005][8];
int dis[1005][1005]; //reduces repeated computations
int n, m, cases;
int arr1[] = {-1, +1, +0, +0, -1, -1, +1, +1};
int arr2[] = {+0, +0, +1, -1, +1, -1, +1, -1};

int bfs(int i, int j) {
	queue <int> q;
	q.push(i);
	q.push(j);	
	dis[i][j] = 0;
	int ret = INT_MAX;
	while(!q.empty()) {
		int u = q.front();
		q.pop();
		int vi = q.front();
		q.pop();						
		if(v[u][vi] == 'F') return dis[u][vi];						
		for(int x = 0; x < 8; ++x) {
			visited[u][vi][x] = true;
			int nx = u + arr1[x];
			int ny = vi + arr2[x];			
			while(nx >= 0 && ny >= 0 && nx < n && ny < m && visited[nx][ny][x] == false && v[nx][ny] != 'X') {			
				visited[nx][ny][x] = true;				
				if(dis[nx][ny] > INF) {
					dis[nx][ny] = dis[u][vi] + 1;
					q.push(nx);
					q.push(ny);								
				}
				nx = nx + arr1[x];
				ny = ny + arr2[x];				
			}
		}
	}
	return -1;	
}

int main() {	
	scanf("%d", &cases);
	while(cases--) {		
		scanf("%d %d", &n, &m);
		for(int i = 0; i < n; ++i) 
			scanf("%s", v[i]);
		int ret;
		for(int i = 0; i <= n; ++i)
			for(int j = 0; j <= m; ++j)
				dis[i][j] = INF + 1;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j) {
				if(v[i][j] == 'S') {
					memset(visited, false ,sizeof visited);
					v[i][j] = 'X';
					ret = bfs(i, j);
					goto radha;
				}
			}
		radha:;
		printf("%d\n", ret);
	}
}


