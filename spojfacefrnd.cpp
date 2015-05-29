#include<iostream>
#include<conio.h>
#include<map>
using namespace std;
int main(void)
{
    map<long int,bool>v;
    int n,i=0;
    scanf("%d",&n);
    long int id,m;
    long int a;
    for(int j=0;j<n;j++)
    {
        scanf("%ld%ld",&id,&m);v[id]=true;
        for(i=0;i<m;i++){
            scanf("%ld",&a);
            v[a]=true;
        }
    }
    cout<<v.size()-n<<'\n';
    getch();
}
