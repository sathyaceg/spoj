#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    long long int t,n,a[2000];
    scanf("%lld",&t);
    printf("\n");
    while(t--)
    {
        int c=0;
        scanf("%lld",&n);
        for(long long int i=0;i<n;i++)
         scanf("%lld",&a[i]);
        for(long long int i=0;i<n-1;i++)
        {
            for(long long int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                 c++;
            }
        }printf("\n");
        cout<<c<<'\n';
    }
    getch();
}            
