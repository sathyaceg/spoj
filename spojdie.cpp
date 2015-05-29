#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d\n",&n);
    while(n--)
    {
    int h,a,t=1,c=0;
    cin>>h>>a;
    while(1)
    {
        if(t==1){
            h+=3;
            a+=2;t=0;c++;
        }
        if(h-5<=0 || a-10<=0)
        {
            if(h-20<=0){
                cout<<c<<'\n';
                break;
            }
            else
            {
                h=h-20;
                a=a+5;t=1;c++;
            }
        }
        else
        {
            h=h-5;
            a=a-10;t=1;c++;
        }
    }
    }
}
            
             
