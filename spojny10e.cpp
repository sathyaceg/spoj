#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int a[65];
    a[1]=10;
    a[2]=55;
    long long int sum=65;
    for(int i=3;i<=64;i++)
    {
        a[i]=(i-2)*100+(i-2)*55+sum;
        sum=a[i];
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,d;
        scanf("%d %d",&n,&d);
        printf("%d %d\n",n,a[d]);
    }
}
