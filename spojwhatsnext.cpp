#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    long long int a,b,c;
    while(1)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a==0 && b==0 && c==0)
         break;
        if((b-a)==(c-b))
        {
            printf("AP ");
            printf("%lld\n",c+(b-a));
        }
        else if((b/a)==(c/b))
        {
            printf("GP ");
            printf("%lld\n",c*(b/a));
        }
    }
    getch();
}
