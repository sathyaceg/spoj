#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int r,t,a,s=0,n;
    scanf("%d",&t);
    while(t--)
    {
        s=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            s+=a;
        }
        r=s/n;
        printf("%d\n",r);
    }
    getch();
}
