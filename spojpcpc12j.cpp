#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    int a;
    int m[110]={0};
    for(int i=0;i<n;i++)
    {
            scanf("%d",&a);
            m[a]++;
    }
    int max1=0;
    int i=0;
    int max=0,flag=0,pos=-1;
    for(i=0;i<=100;i++)
    {
            if(m[i]!=0 && m[i]%i==0 &&(m[i]>max || (m[i]==max && i<pos))){
             max=m[i];
             pos=i;}
    }
    printf("%d\n",pos);
    }
}
