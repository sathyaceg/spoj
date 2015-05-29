#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
    long long int a,b,c;
    while(1)
    {
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
         break;
        if(a>b && a>c)
        {
            if(a*a==(b*b)+(c*c))
             printf("right\n");
            else
             printf("wrong\n");
        }
        else if(c>a && c>b)
        {    
            if((c*c)==(b*b)+(a*a))
             printf("right\n");
            else
             printf("wrong\n");
        }
        else
        {
            if((b*b)==(a*a)+(c*c))
             printf("right\n");
            else
             printf("wrong\n");
        }
    }
    //getch();
}


