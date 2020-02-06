#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

int all(int a[],int n,int x,int output[],int count1,int ans)
{
    if(n==0)
        return ans;
    if(a[0]==x)
    {
        output[ans]=count1;
        ans=ans+1;
    }
        return all(a+1,n-1,x,output,count1+1,ans);
}
/*
int allIndexes(int input[], int size, int x, int output[]){
   
    all(input,size,x,output,0,0);
}
*/
