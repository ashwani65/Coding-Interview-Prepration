#include <iostream>
using namespace std;
int power(int m,int n){
	if(n==0)
		return 1;
	int small= power(m,n-1)*m;
	    return small;
}

int main()
{
   int x,n;
   cin>>x>>n;
   cout<<power(x,n)<<endl;
   return 0;
}