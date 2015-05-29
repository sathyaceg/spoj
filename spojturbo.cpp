#include<iostream>
#include<vector>
#include<algorithm>
#include<conio.h>
using namespace std;
int main()
{
    int i;
    long long int t,n;
    cin>>t;
    vector<int>v(t);
    vector<int>::iterator it;
    for(i=0;i<t;i++)
    {
                    cin>>n;
                    v[i]=n;
    }
    it=v.begin();
    sort(v.begin(),v.end());
    for(;it!=v.end();++it)
     cout<<*it<<'\n';
    getch();
} 
    
                    
                    
    
    
