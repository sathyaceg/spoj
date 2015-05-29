#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
struct dota
{
    char n[16];
    int a,v,s;
}o;
bool compa(dota h1,dota h2)
{
    if(h1.a>h2.a)
     return 1;
    else if(h1.a<h2.a)
     return 0;
    else if(h1.a==h2.a)
    {
        if(h1.v>h2.v)
         return 1;
        else if(h1.v<h2.v)
         return 0;
        else if(h1.v==h2.v)
        {
            if(h1.s<h2.s)
             return 1;
            else if(h1.s>h2.s)
             return 0;
            else if(h1.s==h2.s)
            {
                 if(strcmp(h1.n,h2.n)<0)
                 return 1;
                else
                 return 0;
            }
        }
    }
}
int main()
{
    vector<dota>v(100000);
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%s",v[i].n);
        scanf("%d%d%d",&v[i].a,&v[i].v,&v[i].s);
    }
    sort(v.begin(),v.end(),compa);
    for(int i=0;i<t;i++)
     printf("%s\n",v[i].n);
    scanf("%d",&t);
}
