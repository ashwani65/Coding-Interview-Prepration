#include <iostream>
using namespace std;

int sum(int A[],int size){
	if(size==1) 
		return A[0];
	return (sum(A+1,size-1)+A[0]);
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<sum(a,n)<<endl;
	return 0;
}