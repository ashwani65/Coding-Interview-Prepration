//this algorithm is for finding max subarray(Continous) sum
#include <iostream>
using namespace std;
int kadane(int *arr,int n)
{
	int curr_sum=0;
	int best_sum=0;
	int auxsum=0;
	for(int i=0;i<n;i++){
		curr_sum+=arr[i];
		auxsum+=arr[i];
		if(best_sum<curr_sum)
			best_sum=curr_sum;
		if(curr_sum<0)
			curr_sum=0;
	}
	if(auxsum<0)
		return -1;
	else{
		return best_sum;
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cout<<kadane(arr,n)<<endl;
	return 0;
}