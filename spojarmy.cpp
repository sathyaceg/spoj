#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    printf("\n");
    while(t--)
    {
        int ng,nm;
        scanf("%d%d",&ng,&nm);
        vector<int>v1(ng);
        vector<int>v2(nm);
        for(int i=0;i<ng;i++)
         scanf("%d",&v1[i]);
        for(int i=0;i<nm;i++)
         scanf("%d",&v2[i]);
        vector<int>::iterator max1;
        vector<int>::iterator max2;
        max1=max_element(v1.begin(),v1.end());
        max2=max_element(v2.begin(),v2.end());
        if((*max1)>(*max2))
         printf("Godzilla\n\n");
        if((*max1)<(*max2))
         printf("MechaGodzilla\n\n");
        if((*max1)==(*max2))
         printf("Godzilla\n\n");
    }
}
