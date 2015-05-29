#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,c=0;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(gcd(a[i],a[j])==1)
             c++;
        }
    }
    printf("%d\n",c);
    }
}
