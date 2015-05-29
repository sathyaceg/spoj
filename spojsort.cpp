#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
bool mycompare(pair<long int,long int>x,pair<long int,long int>y)
{
     return (x.first<y.first)||(x.first==y.first && x.second>y.second);
}
int main()
{
    int i,t,j,n;
    long int x,y;
    scanf("%d",&t);
    vector<pair<long int,long int> >::iterator it;
    for(i=0;i<t;i++)
    {
		     scanf("%d",&n);
                    vector<pair<long int,long int> >v(n);
                    //pair<long int,long int>p;
                    for(j=0;j<n;j++)
                    {
                                    
                                    scanf("%ld%ld",&x,&y);
                                    //p=make_pair(x,y);
                                    //v.push_back(p);
				    v[j]=make_pair(x,y);
                    } 
                    sort(v.begin(),v.end(),mycompare);
                    for(it=v.begin();it!=v.end();++it)
                    {
                                    printf("%ld %ld\n",(*it).first,(*it).second);
                    }
    }
    return 0;
}
