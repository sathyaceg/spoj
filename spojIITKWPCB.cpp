#include<iostream>
#include<cstdio>
using namespace std;
unsigned long long int gcd(unsigned long long int a,unsigned long long int b)
{
         if(b==0)
          return a;
         return gcd(b,a%b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              unsigned long long int a;
              scanf("%llu",&a);
              if(a==1)
              {
                      printf("0\n");
                      continue;
              }               
              unsigned long long int i;
              for(i=a/2;i>=0;i--)
              {
                       if(gcd(a,i)==1)
                        break;
              }
              printf("%llu\n",i);
    }
}                                          
