#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[55],b[55];
        scanf("%s",a);
        scanf("%s",b);int j=0,flag1=1,c=0;int st[100]={0},qn[100]={0},flags=0,flagq=0;
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]=='*')
            {
             st[i]++;flags=1;
            }
            if(a[i]=='?')
            {
             qn[i]++;flagq=1;
            }
        }
        if(flags==0 && flagq==0)
        {
            if(strcmp(a,b)==0)
             printf("Yes\n");
            else
             printf("No\n");
            continue;
        }
        j=0;
        for(int i=0;i<strlen(b);i++)
        {
            if(a[j]!=b[i] && (a[j]!='*' || a[j]!='?')) 
            {
                flag1=0;
                break;
            }
            else
            {
                if(a[j]=='*' && j!=strlen(a)-1)
                {
                    j++;
                    while(i<strlen(b))
                    {
                    if(a[j]==b[i]){
                     flag1=1;break;}
                    if(i==strlen(a)-1 && a[j]!=b[i])
                     flag1=0;
                    i++;
                    }
                }
                else if(a[j]=='*' && j==strlen(a)-1)
                    flag1=1;
                else if(a[j]=='?' && j!=strlen(a)-1)
                {
                    j++;
                    if(a[i]==b[j] || a[i+1]==b[j])
                     flag1=1;
                    else
                     flag1=0;
                }
                else if(a[j]=='?' && j==strlen(a)-1)
                {
                    if(i==strlen(a)-1)
                     flag1=1;
                }
            }j++;
        } 
        if(flag1==1)
         printf("Yes\n");
        else
         printf("No\n");
    }
    system("pause");
}            
