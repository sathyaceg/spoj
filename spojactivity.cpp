#include<iostream>
#include<conio.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int c=0;
int main()
{
    int as(int[],int[],int,int);
    int i,t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int s[n+1],f[n+1];
        vector<pair<int,int> >p(n);
        for(i=1;i<n+1;i++){
            scanf("%d%d",&s[i],&f[i]);
            p[i-1]=make_pair(f[i],s[i]);
        }
        sort(p.begin(),p.end());
        vector<pair<int,int> >::iterator it=p.begin();
        i=1;
        for(;it!=p.end();it++)
        {
            s[i]=it->second;
            f[i]=it->first;
            i++;
        } 
        as(s,f,0,n);
    }
    getch();
}
int as(int s[],int f[],int i,int j)
{
    f[0]=-1;
    int m=i+1;
    while(m<=j && s[m]<f[i])
     m++;
    if(m<=j)
    {
        c++;
        as(s,f,m,j);
    }
    else {
        printf("%d\n",c);c=0;
        return 0;
        }
}
