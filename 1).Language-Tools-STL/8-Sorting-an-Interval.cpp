#include<iostream>
#include<algorithm>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

struct  Interval
{
	int st;
	int et;
};

bool compare (Interval i1,Interval i2){
	return i1.st<i2.st;//sorting with starting time 
}
int main(){
	Interval arr[]={{6,4},{3,4},{4,6},{8,13}};
	sort(arr,arr+4,compare);
    rep(i,4){
    	cout<<arr[i].st<<" :"<<arr[i].et<<endl;
    }
	return 0;
}