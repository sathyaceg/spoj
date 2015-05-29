#include<iostream
#include<conio.h>
using namespace std;
int main()
{
    long long int n,k,t;
    int i,c=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
                    cin>>t;
                    if(t%k==0)
                     c++;
    }
    cout<<c;
    getch();
}    
