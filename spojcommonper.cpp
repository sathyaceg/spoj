#include<iostream>
#include<vector>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	vector<char>v1;
	vector<char>v2;
	vector<char>v3;
	char a[1000],b[1000];
	while(scanf("%s%s",a,b)!=EOF)
	{
	for(int i=0;a[i]!='\0';i++)
	   v1.push_back(a[i]);
	for(int i=0;b[i]!='\0';i++)
	   v2.push_back(b[i]);
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),inserter(v3,v3.begin()));
	vector<char>::iterator it;
	for(it=v3.begin();it!=v3.end();it++)
	 cout<<(*it);cout<<'\n';
	v1.clear();v2.clear();v3.clear();
	}
}
