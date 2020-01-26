#include<iostream>
#include <string>
using namespace std;
int main(){
	string s;
	cin>>s;
	int a=0,p=0,sp=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='a')
			a++;
		else if(s[i]=='s')
			sp++;
		else if(s[i]=='p')
			p++;
	}
	cout<<a<<" "<<sp<<" "<<p<<endl;
	return 0;
}