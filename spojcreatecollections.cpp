#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<cstdio>
using namespace std;
int main()
{
          int t;
          scanf("%d", &t);
          while(t--)
          {
                    int n;
                    scanf("%d", &n);
                    int a[n+1];
                    map <int,int> m;
                    int temp;
                    for(int i=0;i<n;i++)
                    {
                            scanf("%d",&temp);
                            m[temp]++;
                    }
                    int res=0;
                    for(map<int,int> :: iterator it=m.begin();it!=m.end();it++)
                    {
                            int val=it->first;
                            map<int,int> :: iterator it1=m.find(2*val);
                            if(it1!=m.end() && it->second!=0 && it1->second!=0)
                            {
                             //int tmp=min(it->second,it1->second);            
                             //res+=(tmp);
                             res++;
                             it->second--;//=tmp;
                             it1->second--;//=tmp;
                            }
                    }
                    printf("%d\n",res);
          }          
}                                                                                                                                  
