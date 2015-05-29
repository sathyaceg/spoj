#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int gcd(int,int);
    int t;
    scanf("%d",&t);
    while(t--)
    {
    double a;double d;int co=1,g;
    cin>>a;
    int c=(int)a;
    //cout<<c<<'\n';
    float e=a-c;cout<<e<<'\n';
    if(e==0)
     printf("1\n");
    else
    {
        while(1)
        {
            e=e*10;cout<<"E:"<<e<<'\n';
            c=int(e);cout<<"C:"<<c<<'\n';
            d=e-c;cout<<"D:"<<d<<'\n';
            co=co*10;
            if(d==0)
             break;
        }
        //cout<<co<<'\n';
        g=gcd(e,co);cout<<g<<'\n';
        printf("%d\n",co/g);
    }
     //cout<<g<<'\n';      
    //cout<<e<<'\n';
    }getch();
    //cout<<int(1/e)<<'\n';
}
int gcd(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    else
    {
        return gcd(b,a%b);
    }
}

    
            

