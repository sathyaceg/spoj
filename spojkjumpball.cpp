#include<iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long long int h,b,c=0;
    scanf("%lld%lld",&h,&b);h=h/b;
    while(h>0){
     h=h/b;c++;}
    printf("%d\n",c);
    }
}
