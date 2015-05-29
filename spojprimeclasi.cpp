#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int t,flag;
    long long int a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&a);
        if(a==1)
        {
         printf("NO\n");
         continue;
        }
        else
        {
            flag=0;
            for(int i=2;i<=sqrt(a);i++)
            {
                if(a%i==0)
                {
                 flag=1;
                 break;
                }
            }
            if(flag==1)
             printf("NO\n");
            else
             printf("YES\n");
        }
    }
    getch();
}
