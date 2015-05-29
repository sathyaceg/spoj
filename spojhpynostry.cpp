#include<iostream>
#include<conio.h>
#include<set>
#include<utility>
using namespace std;
int main()
{
    set<long long int>m;
    set<long long int>::iterator it;
    pair<set<long long int>::iterator,bool>mp;
    int i=0;
    //for(int j=0;j<32;j++)
    //{
    long long int n,d,s=0;
    scanf("%lld",&n);
    while(1)
    {
        s=0;
        for(;n>0;)
        {
           d=n%10;
           n=n/10;
           s+=d*d;
        }
        n=s;
        mp=m.insert(s);
        i++;
        if(s==1 || mp.second==false)
         break;
    }
    if(s==1)
    printf("%d\n",i);
    else
    printf("-1\n");
    //}
    getch();
}            
