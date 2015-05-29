#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);    
    if(n==1)
    {
        printf("0\n");
        return 0;
    }
    vector<unsigned long long int>a(n+1);
    for(int i=0;i<n;i++)
        scanf("%llu",&a[i]);
    unsigned long long int sum=0,temp=a[0];
    for(int i=1;i<n;i++)  
    {
        sum+=(max(temp,a[i]));
        temp=(a[i]);
    }
    printf("%llu\n",sum);
}
