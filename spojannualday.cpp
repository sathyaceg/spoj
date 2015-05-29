#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    long long  a[100005]={0},b[100005]={0},c[100005],num,j=1,l=1;
    a[0]=0,b[0]=0,c[0]=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&num);
        if(num<0){        
         b[j]=((-1)*num);
         c[j]=((-1)*num);
         j++;
        }
        else if(num>=0){
         a[l]=num;l++;}
    } 
    sort(b,b+j);
    sort(a,a+l);   
    sort(c,c+j);
    long long int p=0,q=0,m1=INT_MIN;    
    for(int i=2;i<j;i++)
        c[i]=c[i]+c[i-1];
    for(int i=j-2;i>=1;i--)    
        b[i]=b[i]+b[i+1];    
    for(int i=l-2;i>=1;i--)
        a[i]=a[i]+a[i+1];
    p=q=0;
    sort(b,b+j);
    sort(a,a+l);
     l--;j--;int f1=1,f2=1;
     int m=0,m2=0;
    for(int i=0;i<=k;i++)
    {
        p=0,q=0;
        if(i==0 && j<k)
         f2=0;
        if(k-i==0 && l<k)
         f1=0;
        if(i && f1 && l>1){
         p=a[i];m=i;}
        if(k-i && f2 && j>1)
        {
        if((k-i)%2!=0)
         q=0-(c[k-i]);
        else
         q=b[k-i];m2=k-i;
        }
        if(p+q>=m1 && (p!=0 || q!=0) && m+m2==k )
         m1=p+q;
        f1=1;f2=1;m=0;m2=0;
    }    j=1,l=1;
    printf("%lld\n",m1);
}
