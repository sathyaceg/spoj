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

struct trie {
	int prefix;
	trie* a[10];
};

string str[10001];

void insert(trie* current, string input) {	
	for(int i = 0; i < input.size(); ++i) {
		if(current->a[input[i] - '0'] == NULL) {
			current->a[input[i] - '0'] = new trie;
			current->a[input[i] - '0']->prefix = 0;
			for(int j = 0; j < 10; ++j) current->a[input[i] - '0']->a[j] = NULL;
		}
		current->a[input[i] - '0']->prefix++;
		current = current->a[input[i] - '0'];
	}
}

int count(trie* current, string input) {
	int a = 0;
	for(int i = 0; i < input.size(); ++i) {
		a = current->a[input[i] - '0']->prefix;
		current = current->a[input[i] - '0'];
	}
	return a;
}

int main() {
	int cases;
	cin >> cases;
	while(cases--) {
		trie* root = new trie;
		root->prefix = 0;
		for(int i = 0; i < 10; ++i) root->a[i] = NULL;
		int n;
		cin >> n;
		for(int i = 0; i < n; ++i) cin >> str[i];
		for(int i = 0; i < n; ++i) {
			trie* current = root;
			insert(current, str[i]);
		}
		for(int i = 0; i < n; ++i) {
			trie* current = root;
			if(count(current, str[i]) > 1) {
				cout << "NO\n";
				goto end;				
			}
		}
		cout << "YES\n";
		end:;
	}
}
