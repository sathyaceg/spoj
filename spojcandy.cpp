#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
    long int t;
    scanf("%ld",&t);
    printf("\n");
    while(t--)
    {
        long int n,a,s=0;
        scanf("%ld",&n);
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            scanf("%ld",&a);
            v[i]=a;
            s=(s+a)%n;
        }
        if(s==0)
         printf("YES\n");
        else
         printf("NO\n");
        printf("\n");
        v.clear();
    }
    getch();
}
