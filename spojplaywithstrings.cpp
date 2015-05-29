#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
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
#include <queue>
#include <cstring>
//#define mp make_pair
#define pb push_back
#define disvec(v) { for(int vec_index=0;vec_index<v.size();vec_index++) cout<<v[vec_index]<<" "; cout<<endl;}
using namespace std;
main()
{
	while(1)
	{
	string l,f;
	int n;
	cin>>n;
	if(n==-1) break;
	cin>>l;
	vector <int> t;
	f=l;
	sort(f.begin(),f.end());
	map < pair <char,int> , int> mp;
	int fre[256]={0},c=1;
	for(int i=0;i<l.size();i++)
	{
		fre[l[i]]++;		
		mp [make_pair(l[i],fre[l[i]])]=i;
	}	
	for(int i=0;i<f.size();i++)
	{
		int pos=mp[make_pair(f[i],c)];		
		if(i+1<f.size() && f[i]==f[i+1]) c++;
		else c=1;
		t.pb(pos);
	}
	int k=t[n-1];
	string d;
	for(int i=0;i<f.size();i++) d+=' ';
	d[0]=l[k];
	for(int j=1;j<f.size();j++)
	{
		k=t[k];
		d[j]=l[k];
	}
	cout<<d<<'\n';
}

}

