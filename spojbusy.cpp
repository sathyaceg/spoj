#include<iostream>
#include<vector>
#include<algorithm>
#include<conio.h>
using namespace std;
int main()
{
    int s,e,n,i,t,j;
    cin>>t;
    for(j=0;j<t;j++)
    {
                    
                    cin>>n;
                    vector<int>v;
                    for(i=0;i<n;i++)
                    {
                                    cin>>s>>e;
                                    if((s==2&&(e>5&&e<9&&e>s))||(s>6&&e>=12&&e>s)||(s>2&&s<=6&&e>=9&&e<12)||(s<=1&&e==5||e==6)&&e>s)
                                     v.push_back(1);
                                    else if((s>2&&s<6)&&(e>=9&&e<=12)||(s==2&&e>=9&&e<12)||(s<=1&&e>=6&&e<9)||(s==6&&e>=12)&&e>s)
                                     v.push_back(2);
                                    else if((s>=0&&s<2&&e>=9&&e<=12)||(s==2&&e>=12)||(s>=2&&s<6&&e>=12)&&e>s)
                                     v.push_back(3);
                                    else
                                     v.push_back(0);
                    }
                    vector<int>::const_iterator largest=max_element(v.begin(),v.end());
                    cout<<*largest;
    }
    getch();
}
