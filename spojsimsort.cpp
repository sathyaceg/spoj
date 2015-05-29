#include<iostream>
#include<vector>
#include<algorithm>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    int t,n,i,j;
    char a[10];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
                    scanf("%d",&n);
                    vector<string>v(t);
                    vector<string>::iterator it;
                    for(j=0;j<n;j++)
                    {
                                    cin>>a;
                                    v[j]=a;
                    }
                    sort(v.begin(),v.end());
                    for(it=v.begin();it!=v.end();++it)
                     cout<<*it<<'\n';
    }
    getch();
}                    
                                                        
    
