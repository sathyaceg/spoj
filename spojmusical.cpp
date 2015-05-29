#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
    int n, m;
    scanf("%d %d", &n, &m);    
    for(int i = 1; i <= n; ++i)
    {
    int k = 1;
	int l = k-1;
	int r = n-l-1;
	int p = 1;
	int res = 0;
	while(1)
	{
		int t = l+r+1;
		res++;
		p+=m-1;
		p = (p-1)%t+1;
		cout <<"P:" <<p<<'\n';
		if(l+1 == p)
		 break;
		if(p <= l)
		 l--;
		else 
		 r--;
	}
	if(res == n)
    {
           printf("%d\n", k);
           break;
    }
    }
}
