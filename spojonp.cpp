#include<iostream>
#include<stack>
#include<conio.h>
#include<string.h>
using namespace std;
int pri(char c)
{
    if(c=='+')
     return 1;
    else if(c=='-')
     return 2;
    else if(c=='*')
     return 3;
    else if(c=='/')
     return 4;
    else if(c=='^')
     return 5;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    stack<char>q1;
    char a[450],c[450];
    scanf("%s",a);
    int k=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(isalpha(a[i]))
         c[k++]=a[i];
        else if(a[i]=='(')
         q1.push(a[i]);
        else if(a[i]==')')
        {
            while(!q1.empty() && q1.top()!='(')
            {
                c[k++]=q1.top();
                q1.pop();
            }
            q1.pop();
        }
        else
        {
            while(!q1.empty() && q1.top()!='(' && pri(q1.top())>pri(a[i]))
            {
                c[k++]=q1.top();
                q1.pop();
            }
            q1.push(a[i]);
        }
    }
    while(!q1.empty())
    {
        if(q1.top()!='(')
        c[k++]=q1.top();
        q1.pop();
    }
    c[k]='\0';
    printf("%s\n",c);
    }
    getch();
}
