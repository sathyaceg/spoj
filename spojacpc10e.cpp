#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    while(1)
    {
    long long int g,t,a,d,sum=0,gr,p,k,l;
    scanf("%lld%lld%lld%lld",&g,&t,&a,&d);
    if(g==-1 && t==-1 && a==-1 && d==-1)
     break; 
    gr=g*((t*(t-1))/2);
    p=(g*a)+d;
    if((p & (p-1))==0)
    {
        p=p/2;
        while(p>0)
        {
            sum+=p;
            p=p/2;
        }
    }
    else
    {
        long long int c=(long long int)log2(p);
        k=(long long int)pow(2,c+1);
        l=k-p;
        k=k/2;
        while(k>0)
        {
            sum+=k;
            k=k/2;
        }
    }
    printf("%lld\n",sum+gr);
    }
    getch();
}
        
    
    
    
