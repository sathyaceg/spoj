#include<iostream>
#include<set>
#include<algorithm>
#include<conio.h>
using namespace std;
int main()
{
    long long int c=0,a,t,n,st;
    scanf("%lld",&t);
    for(long long int k=0;k<t;k++)
    {
        c=0;
        scanf("%lld%lld",&n,&st);
        set<long long int>s;
        for(int i=0;i<st;i++)
        {
            scanf("%lld",&a);
            s.insert(a);
        }
        set<long long int>::iterator it=s.end();it--;int j=0;
        for(;it!=s.begin();it--)
        {
            if(c<n){
             c+=(*it);j++;}
            else
             break;
        }
        if(c<n) {c+=(*it); j++;}//cout<<c;
        if(c<n)
         printf("Scenario #%lld:\nimpossible\n\n",k+1);
        else
         printf("Scenario #%lld:\n%d\n\n",k+1,j);s.clear();
    }
   getch();
}
