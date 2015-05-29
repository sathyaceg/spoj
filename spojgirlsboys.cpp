#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
    long int a,b;
    while(1)
    {
        scanf("%ld%ld",&a,&b);
        if(a==-1 && b==-1)
         break;
        if(a==0 && b==0)
         printf("%ld\n",0);
        else if(a==0 || b==0)
        {
         if(a==0)
          printf("%ld\n",b);
        else 
         printf("%ld\n",a);
        }
        else if(a==b)
         printf("%ld\n",1);
        else 
        {
            if(a>=b)
            {
                if(b==1) b+=1;
                printf("%ld\n",);
            }
            else
            {
                if(a==1) a+=1;
                printf("%ld\n",);
            }
        }
    }
    //getch();
}
            
