#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int t;
    scanf("%d\n",&t);//scanf("\n");
    //printf("\n");
    while(t--)
    {
    scanf("\n");
    char s[1000];gets(s);
    int a=0,b=0,c=0,f1=0,f2=0,fa3=0,fb3=0,fc3=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ') continue;
        if(s[i]=='+')
         f1=1;
        else if(s[i]=='=')
         f2=1;
        else if(s[i]!='+' && s[i]!='=' && f1==0 && f2==0)
        {
         if(s[i]!='m' && fa3==0)
          a=a*10+s[i]-'0';
         else if(s[i]=='m')
         {
                a=0;fa3=1;
                while(1)
                {
                    if(s[i]=='l')
                    {
                        i++;
                        break;
                    }i++;
                }
        }
        }   
        else if(s[i]!='+' && f1==1 && f2==0 && s[i]!='=')
        {
         if(s[i]!='m' && fb3==0)
          b=b*10+s[i]-'0';
         else if(s[i]=='m')
         {
                b=0;fb3=1;
                while(1)
                {
                    if(s[i]=='l')
                    {
                        i++;
                        break;
                    }i++;
                }
        }
        }
        else if(s[i]!='+' && f1==1 && f2==1)
        {
         if(s[i]!='m' && fc3==0)
          c=c*10+s[i]-'0';
         else if(s[i]=='m')
         {
                c=0;fc3=1;
                while(1)
                {
                    if(s[i]=='l')
                    {
                        i++;
                        break;
                    }i++;
                }
        }
        }
    }
    //cout<<"a:"<<a<<'\t'<<"b:"<<b<<'\t'<<"C:"<<c<<'\n';
    if(fa3==1)
     a=c-b;
    else if(fb3==1)
     b=c-a; 
    else if(fc3==1)
     c=a+b;
    printf("%d + %d = %d\n",a,b,c);
    }
}   
