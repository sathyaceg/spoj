#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int t,i,a,x;
    int prime(int);
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
                    scanf("%lld",&a);
                    x=prime(a);
                    if(x==1)
                     printf("YES\n");
                    else
                     printf("NO\n");
    } 
    getch();
}            
int prime(int b)
{
    int j,c=0,i;
    for(j=2;j<=b;j++)
    {
                     if(b%j==0)
                     c++;
    }
    return c;
}                    
                    
       
                    
