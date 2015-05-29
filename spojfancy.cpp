#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[35];
        long long int count=0,s=0;
        scanf("%s",a);
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]==a[i+1])
             count++;
        }
        printf("%lld\n",(long long int)pow(2,count));count=0;
    }
    getch();
    
}
            
