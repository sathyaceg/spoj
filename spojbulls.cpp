#include<iostream>
using namespace std;
int main()
{
    char a[11],b[11];
    char len;
    int i,t,m,c=0,c1=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
                    cin>>a;
                    cin>>m;
                   
                    while(m--)
                    {
                               c=0;c1=0;
                              cin>>b;
                              for(int j=0;a[j]!='\0'||b[j]!='\0';j++)
                              {
                                      for(int k=0;b[k]!='\0';k++)
                                      {
                                              if(b[k]==a[j])
                                              {
                                                
                                               c++;
                                            }
                                      }
                                      if(a[j]==b[j])
                                        c1++;
                              }
                              printf("%d %d\n",c,c1);
                    }
      }
      
}
                            
                            
