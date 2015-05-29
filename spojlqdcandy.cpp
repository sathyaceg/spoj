#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long long int a,b,c,d,e,f,g,m,h;
    scanf("%lld",&a);
    b=ceil(log2(a));
    c=pow(2,b);
    if(c==a)
     printf("%lld 0\n",a);
    else
    {
    long long int count=0;d=c;
    while(a>0)
    {
     d=d/2;
     count++;
     if(a>=d)
      a-=d; 
    }
    printf("%lld %lld\n",c,count);
    }
    }
}  
