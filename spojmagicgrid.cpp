#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    int a[502][502],c[502][502],d[502][502];
    int r,co;
    scanf("%d%d",&r,&co);
    for(int i=1;i<=r;i++)
     for(int j=1;j<=co;j++){
      scanf("%d",&a[i][j]);c[i][j]=a[i][j];}
    c[1][1]=a[1][1];if(a[1][1]>=0) d[1][1]=1;
                       else d[1][1]=(a[1][1]*-1)+1;
    for(int i=1;i<=r;i++)
     for(int j=1;j<=co;j++)
     {
            if(i==1)
            {
             if(i!=j)
             c[i][j]=c[i][j]+c[i-1][j];
             if(c[i][j]>=0) d[i][j]=1;
             else
              d[i][j]=max((c[i][j]*-1)+1,d[i][j-1]);
            }
            else if(i!=1 && j==1){
             c[i][j]=c[i][j]+c[i-1][j];
             if(c[i][j]>=0)
              d[i][j]=d[i-1][j];
             else
              d[i][j]=max((c[i][j]*-1)+1,d[i-1][j]);
            }
            else{
             c[i][j]=c[i][j]+(max(c[i][j-1],c[i-1][j]));
             if(c[i][j]>=0) d[i][j]=1;
            else d[i][j]=(c[i][j]*-1)+1;
             d[i][j]=max(d[i][j],min(d[i][j-1],d[i-1][j]));
            }
    }
    /*for(int i=1;i<=r;i++){
     for(int j=1;j<=co;j++){
      cout<<c[i][j]<<'\t';}cout<<'\n';}
    for(int i=1;i<=r;i++){
     for(int j=1;j<=co;j++){
      cout<<d[i][j]<<'\t';}cout<<'\n';}*/cout<<d[r][co]<<'\n';}
}
                
