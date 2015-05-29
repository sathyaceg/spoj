#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[9][9];int b[2][2],k=0,l=0;
        for(int i=0;i<8;i++)
         scanf("%s",a[i]);
        for(int i=0;i<8;i++)
         for(int j=0;j<8;j++)
         {
                if(a[i][j]=='B')
                {   
                       b[k][l]=i;l++;
                       b[k][l]=j;l=0;
                       k++;
                }
            }
        if(abs(b[0][0]-b[1][0])==abs(b[0][1]-b[1][1]))
         printf("Yes\n");
        else
         printf("No\n");
    }
}
