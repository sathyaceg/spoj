#include<iostream>
using namespace std;
int main()
{
    int t=0;
    while(t<10)
    {
        long long int a,b;
        scanf("%lld%lld",&a,&b);
        a=a/2;
        if(b%2!=0){
            b++;
            b=b/2;
            printf("%lld\n%lld\n",a+b,a-(b-1));
        }
        else{
            b=b/2;
            printf("%lld\n%lld\n",a+b,a-b);
        }t++;
    }
}
        
    
