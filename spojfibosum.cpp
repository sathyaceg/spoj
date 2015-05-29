#include<iostream>
#include<cstdio>
using namespace std;
void multiply(long long int F[2][2], long long int M[2][2])
{
  long long int x =  F[0][0]*M[0][0]+F[0][1]*M[1][0];
  long long int y =  F[0][0]*M[0][1]+F[0][1]*M[1][1];
  long long int z =  F[1][0]*M[0][0]+F[1][1]*M[1][0];
  long long int w =  F[1][0]*M[0][1]+F[1][1]*M[1][1]; 
  F[0][0] = x%1000000007;
  F[0][1] = y%1000000007;
  F[1][0] = z%1000000007;
  F[1][1] = w%1000000007;
} 
void power(long long int f[2][2],long long int n)
{
    if(n==0 || n==1)
     return;
    long long int m[2][2]={{1,1},{1,0}};
    power(f,n/2);
    multiply(f,f);
    if(n%2!=0)
     multiply(f,m);
}
long long int fib(int n)
{
    if(n==0)
     return 0;
    long long int f[2][2]={{1,1},{1,0}};
    power(f,n-1);
    return f[0][0]%1000000007;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        printf("%lld\n",(fib(m+2)-fib(n+1)+1000000007)%1000000007);
    }    
}
