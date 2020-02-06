#include<iostream>
using namespace std;

int factorial(int n){
	//base case
	if(n==0){
		return 1;
	}
	//assume that it will work for small problem
	int smallOutput=factorial(n-1);
	int output=n*smallOutput;

	return output;
}
int main(){
	cout<<factorial(4)<<endl;
	return 0;
}