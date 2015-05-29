#include<iostream>
#include<conio.h>
#include<utility>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    set<long long int>s;
    vector<long long int>m;
    set<long long int>::iterator it;
    //pair<set<long long int>::iterator,bool>mp;
    long long int t,n,a;
    scanf("%lld",&t);
    printf("\n");
    while(t--)
    {
        int c=0;
        scanf("%lld",&n);
        printf("\n");
        for(long long int i=0;i<n;i++)
        {
            scanf("%lld",&a);
            m.push_back(a);
            s.insert(a);
        }
        for(it=s.begin();it!=s.end();it++)
        {
            c=(int)count(m.begin(),m.end(),*it);
            if(c>n/2)
            {
             printf("YES %d\n",*it);printf("\n");
             break;
            }
            c=0;
        }
        if(c==0)
         printf("NO\n");printf("\n");m.clear();s.clear();
    }
        getch();
    } 
