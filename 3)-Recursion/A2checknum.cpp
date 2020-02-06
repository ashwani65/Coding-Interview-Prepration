//Check if element is present in the  array using Recursion
#include <iostream>
using namespace std;

bool check(int A[],int n,int x){
	if(n==0) 
		return false;

	if(A[0]==x) 
		return true;

	return check(A+1,n-1,x);
}



int main()
{
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<check(a,n,x)<<endl;
	return 0;
}