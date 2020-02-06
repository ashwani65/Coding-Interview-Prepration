#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

int first(int a[], int n, int x)
{
    
    if(n==0)
        return -1;
     if(a[0]==x)
        return 0;
     
     int ans= first(a+1,n-1,x);
     if(ans!=-1){
     	return ans+1; 
     } else{
     	return ans;
     }
    
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	rep(i,n){
		cin>>arr[i];
	}
	int k; cin>>k;
	cout<<first(arr,n,k);
	return 0;
}
