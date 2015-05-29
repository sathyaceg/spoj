#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
              int i,count[26]={0};
              string a;
              getline(cin,a);
              for(i=0;a[i]!='\0';i++)
              {
                      if(a[i]>32){//cout<<a[i]-'A';
                       count[a[i]-'A']++;}
              } //cout<<'\n';
              /*for(;int i=0;i<26;i++)
               cout<<count[i];cout<<'\n';*/
               int flag,max=0;
              for(i=1,flag=1,max=0;i<26;i++)
              {
                      if(count[i]>count[max])max=i,flag=1;
                      else if(count[i]==count[max]) flag++;
              }
              if(flag>1)
               printf("NOT POSSIBLE\n");
              else
              {
                  int d=(max)-('E'-'A');
                  if(d<0)
                   d=26+d;printf("%d ",d);
                  for(i=0;a[i]!='\0';i++)
                  {
                          if(a[i]==32)
                           printf("%c",a[i]);
                          else if((a[i]-d)>=65)
                           printf("%c",(a[i]-d));
                          else if((a[i]-d)<65)
                           printf("%c",'Z'-(65-((a[i]-d)+1)));
                  }printf("\n");
              }
    } 
     getch();
}

