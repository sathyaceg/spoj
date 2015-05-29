#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    while(1)
    {
        int n,flag=0;
        scanf("%d",&n);
        if(n==0)
         break;
        int a[n];
        for(int i=0;i<n;i++)
         scanf("%d",&a[i]);
        for(int i=0;i<n;i++)
        {
            if(a[a[i]-1]!=i+1){
             flag=1;
             break;
            }
        }
        if(flag==1)
         printf("not ambiguous\n");
        else
         printf("ambiguous\n");
    }
    getch();
}
