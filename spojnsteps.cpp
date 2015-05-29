#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if((a>=b && a-b==0 || a-b==2))
        {
            if(a==b)
            {
             if(b%2==0)
              printf("%d\n",2*b);
             else
              printf("%d\n",(2*b)-1);
            }
            else
            {
             if(b%2==0)
              printf("%d\n",(2*b)+2);
             else
              printf("%d\n",((2*b)-1)+2);
            }
        }
        else
         printf("No Number\n");
    }
    getch();
}
