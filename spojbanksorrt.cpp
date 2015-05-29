#include<iostream>
#include<vector>
#include<algorithm>
#include<conio.h>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    string a;
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            getline(cin,a);tolower(a);
            //cout<<a<<'\n';
            //cin>>a;
            //scanf("%s",a);
            v.push_back(a);
            a.clear();
        }//cout<<a;
        //sort(v.begin(),v.end());
        vector<string>::iterator it=v.begin();it++;
       for(;it!=v.end();it++)
         cout<<(*it)<<'\n';
    }
    getch();
}
            
