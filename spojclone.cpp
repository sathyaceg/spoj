#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    while(1)
    {
    int n,m,t;
    scanf("%d%d",&n,&m);if(n==0 && m==0) break;
    t=n;
    map<string,int>mp;
    while(t--)
    {
        char a[24];
        scanf("%s",a);
        mp[a]++;
    }
    int b[200000]={0},f;
    for(map<string,int>::iterator it=mp.begin();it!=mp.end();it++)
    {
        f=(*it).second;
        f=f-1;
        b[f]++;
    }
    for(int j=0;j<n;j++)
     printf("%d\n",b[j]);
   }
}
     
