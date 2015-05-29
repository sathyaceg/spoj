#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    int a[n+1][n+1],b[n+1][n+1],i,j,k,l;
    for(i=0;i<=n;i++){
     for(j=0;j<=n;j++){
      a[i][j]=-1;b[i][j]=-1;}}
    for(i=1;i<=(n+1)/2;i++){
     for(j=1;j<=i;j++){
      scanf("%d",&a[i][j]);b[i][j]=a[i][j];}}
    for(k=1;k<=(n+1)/2;k++){
     for(l=1;l<=(n+1)/2-k;l++){
      scanf("%d",&a[(n+1)/2+k][l]);
      b[(n+1)/2+k][l]=a[(n+1)/2+k][l];}}
      int g=1,h=1;
   for(int i=2;i<=(n+1)/2;i++){
     for(int j=1;j<=i;j++){
            if(a[i][j]!=-1)
            {
              b[i][j]+=(max(b[i-1][j],b[i-1][j-1]));
            }
        }    
    }
    for(k=1;k<=(n+1)/2;k++){
     for(l=1;l<=(n+1)/2-k;l++){
            if(a[(n+1)/2+k][l]!=-1)
            {
                b[(n+1)/2+k][l]+=max(b[((n+1)/2+k)-1][l],b[((n+1)/2+k)-1][l+1]);
            }
        }
    } 
    printf("%d\n",b[n][1]);
    }
}
    
