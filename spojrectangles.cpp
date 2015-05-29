#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    long int a,s=0;
    scanf("%ld",&a);
    for(long int j=1;j<=(long int)sqrt(a);j++)
     s=s+(a/j-j+1);
    printf("%ld\n",s);
    getch();
}
