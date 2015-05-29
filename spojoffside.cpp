#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    while(1)
    {
        int a,d,flag=0;
        scanf("%d%d",&a,&d);
        if(a==0 && d==0)
         break;
        int b[a],c[d];
        for(int i=0;i<a;i++)
         scanf("%d",&b[i]);
        for(int i=0;i<d;i++)
         scanf("%d",&c[i]);
        sort(b,b+a);
        sort(c,c+d);
        if(b[0]<c[1])
         printf("Y\n");
        else 
        printf("N\n");
    }
}

