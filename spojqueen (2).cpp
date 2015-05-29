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

char v[105][105];
bool visited[1005][1005][8];
int n, m, cases;
int arr1[] = {-1, +1, +0, +0, -1, -1, +1, +1};
int arr2[] = {+0, +0, +1, -1, +1, -1, +1, -1};

int bfs(int i, int j) {
	queue <int> q;
	q.push(i);
	q.push(j);
	q.push(0);	
	int ret = INT_MAX;
	while(!q.empty()) {
		int u = q.front();
		q.pop();
		int vi = q.front();
		q.pop();		
		int cost = q.front();
		q.pop();		
		if(v[u][vi] == 'F') return cost;						
		for(int x = 0; x < 8; ++x) {
			visited[u][vi][x] = true;
			int nx = u + arr1[x];
			int ny = vi + arr2[x];
			int j = 2;			
			while(nx >= 0 && ny >= 0 && nx < n && ny < m && visited[nx][ny][x] == false && v[nx][ny] != 'X') {			
				visited[nx][ny][x] = true;
				q.push(nx), q.push(ny), q.push(cost + 1);								
				nx = nx + arr1[x]*j;
				ny = ny + arr2[x]*j;
				++j;
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
