#include<iostream>
using namespace std;

int duplicate(int *arr,int size ){
	long long sum=0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	int n=size;
	int sumnatural=((n-2)*(n-1))/2;
	int i= (sum-sumnatural);
	return i;
}

int main(){
	int n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int num=duplicate(a,n);
	cout<<num<<endl;
    return 0;
}