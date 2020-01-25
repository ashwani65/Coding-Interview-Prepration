#include<iostream>
#include<algorithm>
#include<cmath>
#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

int main(){
	int arr[]={1,3,2,5,7,6};
	sort(arr,arr+6);
	// sort(arr+m,arr+n,greater<int>());//it will sort the array in decreasing order from index m to n
	rep(i,6){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int a=binary_search(arr,arr+6,2);
	cout<<a<<endl;

	//lower_bound -it returns pointer to that element
	cout<<lower_bound(arr,arr+6,2)<<endl;//will give pointer to that elemnt
	// but we want index
	int b=lower_bound(arr,arr+6,2)-arr;
	cout<<b;
	cout<<endl;

	//upper bound
	cout<<upper_bound(arr,arr+6,3)-arr;
	cout<<endl;

	//__gcd(a,b)
	cout<<__gcd(10,6)<<endl;
	
	//pow(a,b)
	cout<<pow(2.2,5)<<endl;

	//swap(a,b)

	int x=10;
	int y=12;
	swap(x,y);
	cout<<x<<endl;
	cout<<y<<endl;
	
	//max
	cout<<max({1,6,4})<<endl;

	//min
	cout<<min({1,6,4})<<endl;

	return 0;

}
//so agar lower_bound m agar index nhi ,milta to us se just higher number ka jo index h uske correspoing wo index ka pointer la kr de deta h
//agr values repeated h to wo first wale ka la pointer la kr deta h

// upper_bound()-lower_bound m agar elemnt nhi milta tha  to wo next higher element ka index la kr de deta h ,
// but upper_bound m element mil bhi gya to next higher element ka index la kr de deta h