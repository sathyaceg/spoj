#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;//scanf("%lld",&t);
    while(t--){
    long long int a,s=0,i=5;
    cin>>a;//scanf("%lld",&a);
    while(i<=a)
    {
        //if(a==0)
         //break;
        //a/(int)pow(5,i);
        //cout<<a<<'\n';
        s+=a/i;
        i*=5;
    }
    cout<<s<<'\n';//printf("%lld\n",s);
    }
    getch();
}
    
