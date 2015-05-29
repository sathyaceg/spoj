#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
        int a,i,b,s=0;
        scanf("%d%d",&a,&b);
        if(a%2==0)
         i=a+1;
        else
         i=a;
        for(;i<=b;i+=2)
            s+=i;
        printf("Case %d:%d\n",j,s);
    }
    getch();
}
