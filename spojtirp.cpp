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

string a, b;
int dp[85][85];
vector <string> s;
map <string, bool> m[85][85];

void recurse(int i, int j, string word)
{	
	if(m[i][j].find(word) != m[i][j].end())
	 return;
	if(i == 0 && j == 0)	
	 s.push_back(word);
	else if(a[i-1] == b[j-1])
	{
		word = a[i-1] + word;
		recurse(i-1, j-1, word);
	}
	else if(dp[i-1][j] > dp[i][j-1])
	 recurse(i-1, j, word);
	else if(dp[i][j-1] > dp[i-1][j])
	 recurse(i, j-1, word);
	else
	{
		recurse(i-1, j, word);
		recurse(i, j-1, word);
	}		
	m[i][j][word] = true;
}

int lcs(int i, int j)
{	
	if(i < 0 || j < 0)
	 return 0;
	if(dp[i][j] != 0)
	 return dp[i][j];
	if(a[i - 1] == b[j - 1]) 					
		return dp[i][j] = lcs(i - 1, j - 1) + 1;			
	return dp[i][j] = max(lcs(i - 1, j), lcs(i, j - 1));
}

int main()
{
	int cases;
	cin >> cases;
	while(cases--)
	{				
		cin >> a >> b;
		s.clear();
		memset(dp, 0, sizeof(dp));
		lcs(a.size(), b.size());
		//dp[0][0] = 0;		
		recurse(a.size(), b.size(), "");
		sort(s.begin(), s.end());
		for(vector <string> :: iterator it = s.begin(); it != s.end(); ++it)
	 		cout << (*it) << '\n';	
	}	
}
