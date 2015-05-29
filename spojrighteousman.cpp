#include <iostream>	
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <climits>
#include <set>
#include <map>
#include <queue>

using namespace std;

bool visited[55][55][(1 << 11)];
int a[55][55], ex, ey, sx, sy;
int arr1[] = {-1, +0, +1, +0};
int arr2[] = {+0, +1, +0, -1};
int ret = INT_MAX, n;

int bfs() {
		queue <int> q;
		q.push(sx);
		q.push(sy);
		q.push(1);
		q.push(1 << (a[sx][sy] - '0'));
		while(!q.empty()) {
			int x = q.front(); q.pop();
			int y = q.front(); q.pop();
			int cost = q.front(); q.pop();
			int mask = q.front(); q.pop();
			if(x == ex && y == ey) return cost;
			if(visited[x][y][mask]) continue;
			visited[x][y][mask] = true;
			for(int i = 0; i < 4; ++i) {
				int nx = x + arr1[i];
				int ny = y + arr2[i];				
				if(nx >= 0 && ny >= 0 && nx < n && ny < n) {
					if(a[nx][ny] == a[sx][sy]) {
						cout << "HELLO:\n";
						cost = cost, mask |= (1 << (a[nx][ny] - '0'));
					}
					else if(!(mask & (1 << (a[nx][ny] - '0')))) {					
						cout << "HERE: " << a[nx][ny] << '\n';
						cost = cost + 1, mask |= (1 << (a[nx][ny] - '0'));					
					}
					q.push(nx), q.push(ny), q.push(cost), q.push(mask);
				}
			}
		}
}

int main() {		
	int cases;
	cin >> cases;
	while(cases--) {		
		memset(visited, false, sizeof visited);		
		cin >> n;
		for(int i = 0; i < n; ++i)	
			for(int j = 0; j < n; ++j)
				cin >> a[i][j];		
		cin >> sx >> sy >> ex >> ey;				
		ret = bfs();
		cout << ret << '\n';
	}
}
