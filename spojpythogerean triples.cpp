#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
        {
            if((a+1)*(a+1)==(a*a)+(b*b))
             printf("YES %d\n",a+1);
            else
             printf("NO\n");
        }
        else
        {
            if((b+1)*(b+1)==(a*a)+(b*b))
             printf("YES %d\n",b+1);
            else
             printf("NO\n");
        }
    }
    getch();
}
