#include<iostream>
#include<conio.h>
using namespace std;
void kmp(char a[],char b[])
{
    int m;
    int n=strlen(a);
    m=strlen(b);int pi[m+1];
    int q=0;
    void prefix(char[],int[]);
    prefix(b,pi);for(int i=1;i<=m;i++) cout<<pi[i]<<'\n';
    for(int i=1;i<=n;i++)
    {
        cout<<"here\n";
        while(q>0 && b[q+1]!=a[i])
         q=pi[q];
        if(b[q+1]==a[i])
         q++;
        if(q==m-1){cout<<"prda";int f=i-m;
         cout<<i<<'\n';
         q=pi[q];
         }
         cout<<"q:"<<q<<'\n';
    }
}
void prefix(char b[],int pi[])
{
    int m=strlen(b);
    int k=0;pi[1]=0;
    for(int q=2;q<=m;q++)
    {
        cout<<"there\n";
        while(k>0 && b[k+1]!=b[q])
         k=pi[k];
        if(b[k+1]==b[q])
         k++;
        pi[q]=k;
    }
}
int main()
{
    char a[100],b[100];cin>>a;cin>>b;/*
    for(int i=0;a[i]!='0';i++){
     scanf("%c",&a[i]);}cout<<"dei:'(";
    for(int j=0;b[j]!='0';j++){
     scanf("%c",&b[j]);  }*/
    kmp(a,b);
    getch();
}
         
