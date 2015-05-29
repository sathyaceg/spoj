#include <iostream>
#include <map>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

vector <int> v[105];
map <pair <int, int>, int> m;
bool visited[105];
map <int, int> ment;
bool b;

void recurse(int i, int state) {		
	if(ment[i] == 0) ment[i] = state;
	else if(state != ment[i]) {
		b = false;
		return;
	}
	if(visited[i] == true) return;
	visited[i] = true;	
	for(int j = 0; j < v[i].size(); ++j) {
		pair <int, int> p;
		p = make_pair(i, v[i][j]);
		int nstate = m[p];		
		if(state == 1) recurse(v[i][j], nstate);
		else {
			if(nstate == 1)	nstate = -1;
			else nstate = 1;
			recurse(v[i][j], nstate);
		}
	}	
}

int main() {
	while(1) {
		int n;
		cin >> n;
		if(n == 0)	break;
		for(int i = 0; i < 105; ++i) v[i].clear();
		m.clear();
		ment.clear();
		for(int i = 1; i <= n; ++i) {
			int t;
			cin >> t;
			string str;
			cin >> str;		
			v[i].push_back(t);
			pair <int, int> p;
			p = make_pair(i, t);
			int st = (str == "true")?1:-1;
			m[p] = st;
		}
		int flag = 1;
		b = true;
		for(int i = 1; i <= n; ++i)	
		{
			int state = 1;
			memset(visited, false, sizeof visited);
			ment.clear();			
			b = true;
			recurse(i, state);
			if(b == false) {
				ment.clear();
				memset(visited, false, sizeof visited);
				state = -1;
				b = true;
				recurse(i, state);
				if(b == false) break;
			}			
		}		
		if(b == true) cout << "NOT ";
		cout << "PARADOX\n";
		radha:;
	}
}
