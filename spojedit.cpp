#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
int c[2004][2004]={0};
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int i=0,j=0;
    string a,b;
    cin>>a>>b;
    a="0"+a;
    b="0"+b;
    for(i=0;i<a.size();i++)
     c[0][i]=i;
    for(i=1;i<b.size();i++)
     c[i][0]=i;
    for(i=1;i<b.size();i++)
    {
            for(j=1;j<a.size();j++)
            {
                    if(b[i]==a[j])
                     c[i][j]=c[i-1][j-1];
                    else
                     c[i][j]=min((min(c[i-1][j-1],c[i-1][j])),c[i][j-1])+1;
            }
    }
    printf("%d\n",c[i-1][j-1]);
    }
}

