#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    long int t;
    scanf("%ld",&t);
    long int a,s=0; 
    while(t--)
    {
        scanf("%ld",&a);
        if(a>0)
        s+=a;
    }
    printf("%d\n",s);
    getch();
}
