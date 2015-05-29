#include<iostream>
using namespace std;
int main()
{
    long long int t[100];
    t[0]=1;
    t[1]=2;
    t[2]=3;
    t[3]=4;
    for(int i=4;i<100;i++)
        t[i]=t[i-1]+t[i-3];
    for(int i=0;i<100;i++)
        printf("%lld\n",t[i]);
    scanf("%d",&t[0]);
}
        
