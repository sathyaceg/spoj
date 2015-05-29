#include<iostream>
#include<vector>
#include<algorithm>
#include<conio.h>
using namespace std;
int main()
{
    int t;
    long long int n,k,a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&k);
        vector<long long int>v(n);
        vector<long long int>::iterator it;
        for(int i=0;i<n;i++){
            scanf("%lld",&a);
            v[i]=a;
        }
        sort(v.begin(),v.end());
        if(k==1)
         printf("0\n");
        else if(k==n)
         printf("%lld\n",v[n-1]-v[0]);
        else 
        {
            vector<long long int>r;
            for(int i=0;i<(v.size()-k);i++)
            {
                if(v[i+k]<v.size())
                 r.push_back(v[i+k]-v[i]);
            }
                vector<long long int>::iterator min;
                min=min_element(r.begin(),r.end());
                cout<<*min<<'\n';
            }
    }
    getch();
}        
