#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    long long int a;
    while(EOF)
    {
        cin>>a;
        long long int s=81;
        if(a<=9)
         cout<<a*a<<'\n';
        else
        {
            long long int j=1;
            for(long long int i=1;i<=a-9;i++)
            {
                if(j>17)
                 j=1;
                s+=j;
                j+=2;
            }
            cout<<s<<'\n';
        }
    }
    getch();
}
        
            
