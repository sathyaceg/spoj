#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string inp;
	cin >> inp;
	int ab = 0, ba = 0;
	for(int i = 0; i < inp.size() - 1; ++i) 
		if(inp[i] == 'A' && inp[i + 1] == 'B') ab++;	
	for(int i = 0; i < inp.size() - 1; ++i) 
		if(inp[i] == 'B' && inp[i + 1] == 'A') ba++;	
	string a;
	if(inp.size() <= 4) {
		a = "NO";
		cout << a << '\n';
		return 0;
	}
	if(ab == 0 || ba == 0) {
		a = "NO";
		cout << a << '\n';
		return 0;
	}
	if(ab >= 2 && ba >= 2) {
		a = "YES";
		cout << a << '\n';
		return 0;
	}
	bool flag = false;
	if(ab == 1) {
		int posab[2];		
		for(int i = 0; i < inp.size() - 1; ++i) {
			if(inp[i] == 'A' && inp[i + 1] == 'B') posab[0] = i, posab[1] = i + 1;
		}
		for(int i = 0; i < inp.size() - 1; ++i) {
			if(inp[i] == 'B' && inp[i + 1] == 'A') {
				if(i == posab[1] || i + 1 == posab[0]) continue;
				else {
					flag = true;
					break;
				}
			}
		}
	} else {
		int posba[2];	
		for(int i = 0; i < inp.size() - 1; ++i) {
			if(inp[i] == 'B' && inp[i + 1] == 'A') posba[0] = i, posba[1] = i + 1;
		}
		for(int i = 0; i < inp.size() - 1; ++i) {
			if(inp[i] == 'A' && inp[i + 1] == 'B') {
				if(i == posba[1] || i + 1 == posba[0]) continue;
				else {
					flag = true;
					break;
				}
			}
		}
		
	}
	if(flag == true) {
		a = "YES";
		cout << a << '\n';
	} else {
		a = "NO";
		cout << a << '\n';
	}
}
