#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
    while(1)
    {
        int a;
        scanf("%d",&a);
        if(a==0)
         break;
        printf("%.2lf\n",(a*a)/ 6.2831853);
    }
    getch();
}
