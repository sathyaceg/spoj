#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    int j,i,n,s=0,c=0,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
                    scanf("%d%d",&n,&k);
                    s=0;
                    c=0;
                    for(j=1;j<=n;j++)
                    {
                                     c=c+pow(j,k);
                                     s=s+c;
                    }printf("%d",s);
     }
     return 0;
}
