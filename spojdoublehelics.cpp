#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    while(1)
    {
        int n,m;
        long long int s1=0,s2=0;
        scanf("%d",&n);
        if(n==0)
         break;
        vector<long long int>a(n);
        int d;
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        scanf("%d",&m);
        vector<long long int>b(m);
        for(int i=0;i<m;i++)
            scanf("%lld",&b[i]);
        vector<long long int>c;
        set_intersection(a.begin(),a.end(),b.begin(),b.end(),inserter(c,c.begin()));
        int i=0,j=0,flag=0,f=0;
        long long int s3=0;
        if(c.size()!=0){vector<long long int>::iterator it=c.begin();
        for(i=0,j=0;i<n&&j<m;i++,j++)
        {
            if(a[i]==(*it) || b[j]==(*it))
            {
                if(a[i]==(*it) && b[j]==(*it)){
                 s1+=a[i]; s2+=b[j];}
                 else{
                if(a[i]==(*it)){s1+=a[i];
                while(b[j]!=(*it) && j<m){
                 
                 s2+=b[j];
                 j++;}s2+=b[j];}
                else{ s2+=b[j];
                 while(a[i]!=(*it) && i<n){
                  s1+=a[i];
                  i++;}s1+=a[i];}
                }
                if(s1>=s2)
                 flag=1;
               if(flag==1)
                s3+=s1; 
               else
                s3+=s2;
               s1=0;s2=0,flag=0; it++;
            } else{
            s1+=a[i];
            s2+=b[j];}
        }}
        while(i<n){
         s1+=a[i];i++;}
        while(j<m){
         s2+=b[j];j++;}
        if(s1>s2)
         s3+=s1;
        else
         s3+=s2;
        printf("%lld\n",s3);
    }
}   
