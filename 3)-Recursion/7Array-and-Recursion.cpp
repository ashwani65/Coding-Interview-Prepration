#include<iostream>
using namespace std;

bool isSorted2(int *a,int size)
{
	if(size==0 || size==1){
		return true;
	}

	bool isSmallerSorted=isSorted2(a+1,size-1);
	if(!isSmallerSorted){
		return false;
	}
	
	if(a[0]>a[1])
		return false;
	else 
		return true;
}

bool isSorted(int *a,int size)
{
	if(size==0 || size==1)
		return true;
	if(a[0]>a[1])
		return false;
	bool isSmallerSorted=isSorted(a+1,size-1);
	return isSmallerSorted;
	/*if(isSmallerSorted){
		return true;
	} else{
		return false;
	}*/
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(isSorted(arr,n)){
		cout<<"YES";
	} else{
		cout<<"no";
	}
	return 0;
}