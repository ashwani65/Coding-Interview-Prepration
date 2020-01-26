//Max-Product-Subarrary  O(n)
#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int maxSubarrayProduct(int arr[],int n){
	int max_ending_here=1;
	int min_ending_here=1;

	int max_so_far=0;
	rep(i,n){
		if(arr[i]>0){
			max_ending_here=(max_ending_here)*arr[i];
			min_ending_here=min(min_ending_here*arr[i],1);
		} else if(arr[i]==0){
			max_ending_here=1;
			min_ending_here=1;
		} else{
			int temp=max_ending_here;
			max_ending_here=max((min_ending_here)*arr[i],1);
			min_ending_here=(temp)*arr[i];
		}
		max_so_far=max(max_so_far,max_ending_here);
	}
	return max_so_far;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	rep(i,n){
		cin>>arr[i];
	}
	int ans=maxSubarrayProduct(arr,n);
	cout<<ans<<endl;
	return 0;

}