#include<iostream>
#include<string>
//#include<conio.h>
using namespace std;
int gcd(int a,int b)
{
    if(a%b==0)
    return b;
    else
    return gcd(b,a%b);
}
main()
{
      string a;
      int num=0,i,j,count=1,gcd1,n;
      scanf("%d",&n);
      while(n--)
      {
                num=0;
                count=1;
      cin>>a;
      if(a=="0")
      cout<<"1\n";
      
      else
      {
      for(i=0;i<a.size()&&a[i]!='.';i++);
//      cout<<a[i]<<endl;
if(a[i]!='.')
printf("1\n");
else
{
      for(j=i+1;j<a.size();j++,count*=10)
      num=num*10+(a[j]-48);
//      printf("%d",num);
      gcd1=gcd(count,num);
//      printf("\ngcd %d",gcd1);
printf("%d\n",(count)/gcd1);
}
}
}

      //getch();
      }
