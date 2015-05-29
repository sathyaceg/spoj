#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int c=0;
    long long int n;scanf("%lld",&n);
    //while((scanf("%lld",&n))!=EOF)
    //{
        while(n>1)
        {
            if(n%2==0)
             n=n/2;
            else
            {
                n=3*n+3;
                c=1;
                if(c==1)
                 break;
            }
        }
        if(c!=1)
         printf("TAK\n");
        else
         printf("NIE\n");
        getch();
}
        
