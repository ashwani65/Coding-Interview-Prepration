//Count-Number-of-Digits using Recursion

#include <iostream>
using namespace std;
int count(int c)
{
	if(c==0) return 0;
	int small =count(c/10);
	return small+1;
}
int main()
{
	int n;
	cin>>n;
	cout<<count(n)<<endl;
	return 0;
}