#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    vector<long long int>v(4);
    vector<long long int>::iterator l;
    for(int j=1;j<=t;j++)
    {
        long long int a;
        for(int i=0;i<4;i++){
         cin>>a;
         v[i]=a;
    }
        l=max_element(v.begin(),v.end());
        cout<<"Case "<<j<<":"<<(*l);
    }
    getch();
}
         
