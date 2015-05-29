#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int a[100005];
int n, c;
bool fuckedup(long long int p)
{
	int b = 0;
	int count = 1;
	for(int i = 1; i < n && count < c; ++i)
	{
		if(a[i] - a[b] >= p)						
		{
		    count++;
		    b = i;			
		}		 
	}	
	if(count == c)
	 return true;
	return false;
}
long long int bsearch()
{
	long long int start = 0, end = a[n-1];
	while(end - start > 1)
	{
		long long int mid = end + (start - end)/2;
		if(fuckedup(mid) == 1)
		 start = mid;
		else
		 end = mid;
	}
	return start;	
}
int main()
{
	int cases;
	scanf("%d", &cases);
	while(cases--)
	{		
		scanf("%d %d", &n, &c);		
		for(int i = 0; i < n; ++i)
		 scanf("%d", &a[i]);
		sort(a, a+n);
		printf("%lld\n", bsearch());
	}
}
