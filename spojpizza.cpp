#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int t,ans=0,i=0,j=0,k=0,mod4=0,mod2=0;
    scanf("%d",&t);
    char a[3];
    while(t--)
    {
              scanf("%s",a);
              if(a[0]=='1' && a[2]=='4')
               i++;
              else if(a[0]=='1' && a[2]=='2')
               j++;
              else if(a[0]=='3' && a[2]=='4')
              {
                   k++;
                   ans++;
              }
    }
    ans=ans+(i/4);
    i=i%4;
    ans=ans+(j/2);
    j=j%2;
    if(j==1 && i>0)
    {
            ans+=1;
            j--;i--;
    }
    if(k>0&&i>0&&k>=i)
     i=0;
    else if(k==0 && i>0)
     ans+=1;
    else if(k>0&&i>0&&k<i)
    {
     if(k==1)
      ans=ans+1;
     else if(k==2)
      ans=ans+1;
    }
    if(j%2==1)ans+=1;
    cout<<ans+1<<'\n';
    getch();
}
