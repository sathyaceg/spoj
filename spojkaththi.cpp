#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <climits>
#include <cmath>
#include <map>
#include <queue>
#include <set>
#include <deque>

using namespace std;

struct opt {
	int x, y, cost;
	opt(int x1, int y1, int cost1) {
		x = x1;
		y = y1;
		cost = cost1;
	}
};

int r, c;
char arr[1001][1001];
bool visited[1001][1001];
int arr1[] = {-1, +1, +0, +0};
int arr2[] = {+0, +0, +1, -1};
int a;

int main() {
	int cases;
	scanf("%d", &cases);	
	while(cases--) {
		int nx, ny;
		scanf("%d %d", &r, &c);
		for(int i = 0; i < r; ++i) scanf("%s", arr[i]);
		memset(visited, false, sizeof visited);					
		deque <opt> q;		
		q.push_front(opt(0, 0, 0));
		while(!q.empty()) {
			opt u = q.front();			
			q.pop_front();						
			if(u.x == r - 1 && u.y == c - 1) {
				a = u.cost;
				break;
			}
			if(visited[u.x][u.y] == true) continue;
			visited[u.x][u.y] = true;
			for(int i = 0; i < 4; ++i) {
				nx = u.x + arr1[i];
				ny = u.y + arr2[i];
				if(nx >= 0 && ny >= 0 && nx < r && ny < c && visited[nx][ny] == false) {													
					if(arr[u.x][u.y] == arr[nx][ny]) {						
						q.push_front(opt(nx, ny, u.cost));
					} else {									
						q.push_back(opt(nx, ny, u.cost + 1));
					}
				}
			}
		}
		printf("%d\n", a);
	}
}

