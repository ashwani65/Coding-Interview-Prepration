#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

int last(int a[], int n, int x,int count1) {
       
    if(n==0)
        return -1;
    
    int p= last(a+1,n-1,x,count1+1);
    if(p==-1)
    {
        if(a[0]==x)
            return count1;
        else
            return p;
    }
    else
        return p;
}



int lastIndex(int a[], int n, int x) {
   return last(a,n,x,0);
}
