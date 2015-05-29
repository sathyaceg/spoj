#include<iostream>
#include<string>
using namespace std;
int main()
{    
    int t;  
    while((scanf("%d",&t))!=0)
    {
        
        int n,m,v1,v2,i=0,c=0,j=1,l=1;
        scanf("%s",a);
    n=2*t-1;
    m=n+j;v2=2;l=(strlen(a)/t);
    if(l%2!=0)
     l-=1;
    while(1)
    {
        v1=i;
        c=0;
        printf("%c",a[i]);
        while(c!=l)
        {
            if(a[i+n]=='\0') 
             break;
            if(a[m+i]=='\0')
             printf("%c",a[i+n]);
            else if(a[i+n]!='\0' && a[i+m]!='\0')
            printf("%c%c",a[i+n],a[m+i]);
            n+=(2*t);
            m=n+j;
            c+=2;
        }
        n=2*t-1;
        j+=2;
        n=n-v2;
        m=n+j;
        i++;v2+=2;
        if(i==t)
         break;
    }
}
    //getch();
}
