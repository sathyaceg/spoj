#include<iostream>
#include<conio.h>
#include<string.h>
#include<cstdlib>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,r,c=0,n,m;
        char s[14];
        scanf("%d%d",&l,&r);
        for(int i=l;i<=r;i++)
        {
            n=i;
            while(i>0)
            {
                if(i%2==0)
                {
                    c++;
                    break;
                }
                n=n/10;
            }
          /*itoa(i,s,10);
          for(int j=0;j<strlen(s);j++)
          {
                if((s[j]-'0')%2==0){
                 c++;  break;}
          }*/
        }
        printf("%d\n",c);
    }
}
