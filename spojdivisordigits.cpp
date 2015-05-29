#include<iostream>
#include<string.h>
#include<conio.h>
#define lli long long int
lli m,k,diff;
#define rfoid(n,k,diff)   for( m=n; m>=k; m=m-diff)
using namespace std;
int main()
{
    char a[251];
    while(scanf("%s",a)!=EOF)
    {
    long long int div[10]={0};div[0]=0;div[1]=1;
    int count=0,last1,last2,last3,temp;
    int len=strlen(a);
    last1=a[len-1]-'0';
    if(len>1)
    last2=last1+(a[len-2]-'0')*10;
    if(len>2)
    last3=last2+(a[len-3]-'0')*100;
    long long int sum=0,ans=0;
    //for(int i=0;i<len;i++)
    //{
            sum=0;
            //if(a[i]=='3' || a[i]=='6' || a[i] =='9')
	        //{
             for(int l=0;l<len;l++)
              sum=sum+(a[l]-'0');
             //}
             //if(a[i]=='0')
              //continue;
             //if(a[i]=='1')
              //count++;
             //else if(a[i]=='2'){
                  if(last1%2==0)
                   div[2]=1;
             //}
             //else if(a[i]=='5'){
                  if(last1==5||last1==0)
                   div[5]=1;
             //}
             //else if(a[i]=='4'){
                  if(len==1)
                  {
                            if(last1%4==0)
                             div[4]=1;
                  }
                  else
                  {
                       if(last2%4==0)
                        div[4]=1;
                  }
             //}
             //else if(a[i]=='8'){
                  if(len==1)
                  {
                            if(last1%8==0)
                             div[8]=1;
                  }
                  else if(len==2)
                  {
                       if(last2%8==0)
                        div[8]=1;
                  }
                  else
                  {
                   if(last3%8==0)
                   count++;
                  }
             //
            //lse if(a[i]=='3'){
                  if(sum%3==0)
                   div[3]=1;
             //
             //else if(a[i]=='6'){
                  if(sum%3==0 && last1%2==0)
                   div[6]=1;
             //}
             //else if(a[i]=='9'){
                  if(sum%9==0)
                   div[9]=1;
             //}
             //else if(a[i]=='7'){
                  long long int s=0,flag=-1;;
                  a[-1]='0', a[-2]='0';
                  rfoid(len-1,0,3){
                                   flag *= -1;
                                   s+= ((a[m]-'0') + 3*(a[m-1]-'0') + 2*(a[m-2] - '0'))*flag;
                  }
                  if( s%7 == 0 )
                   div[7]=1;
             sum=0;
             for(int i=0;i<len;i++)
             {
                    temp=a[i]-'0';
                    ans=ans+div[temp];
            }
            //}
    printf("%lld\n",ans);ans=0;
    //}
    }
    getch();
}
/*foi(0,len){
            temp = str[i]-'0';
            sum += div[temp];
        }

        printf("%lld\n",sum);*/
                 
//             840893293987316962266593096523553790688457523047798727428903495259508675658356663641474419446402639023033731696911568889015045704281115842338022917418230531462083656643336032443155672776231138623432096651527135537784992142912920245634799737
         
                 
             
             
