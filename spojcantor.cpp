#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long sum,n;
    register int i,x,y;
    //freopen("in.txt","r",stdin);
    while(scanf("%ld",&n)!=EOF)
    {
        sum=0;
        for(i=1;sum<n;i++)
            sum+=i;//for find row or column
            cout<<"i:"<<i<<'\n';cout<<"sum:"<<sum<<'\n';
        if(i&1)
        {
               cout<<"n+i"<<n+i<<'\n';
            x=(n+i)-(sum+1);
            y=i-x;
        }
        else
        {
            cout<<"n+i:"<<n+i<<'\n'<<"sum:"<<sum+1<<'\n';
            y=(n+i)-(sum+1);
            x=i-y;
        }
        printf("TERM %ld IS %d/%d\n",n,x,y);
    }
    return(0);
} 
