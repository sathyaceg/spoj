#include<iostream>
using namespace std;
int main()
{
    int j,i,t,n,s=0,c=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
                    cin>>n;
                    s=0;
                    c=0;
                    for(j=1;j<=n;j++)
                    {
                                     c=c+((((j*(j+1))/2)%1000000003)*(((j*(j+1))/2)%1000000003))%1000000003;
                                     //s=s+c;
                    }
                     c=c%1000000003;
                     cout<<c;
     }
     return 0;
}
                                     
                                     
