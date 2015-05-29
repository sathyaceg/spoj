#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[180];
    int i,j,t,k=1,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
                    cin>>n;
                    cin>>a;
                    cout<<k++<<" ";
                    if(strlen(a)==1 && n==1)
                     cout<<endl;
                    else 
                    {
                         for(j=0;a[j]!='\0';j++)
                         {
                                                if(j!=n-1)
                                                cout<<a[j];
                         }
                    } 
     }
     getch();
}      
    
    
