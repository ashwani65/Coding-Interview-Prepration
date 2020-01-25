#include<iostream>
#include<string>

using namespace std;

int main(){
	string s="ashwani";
	string s1(s);//copy the same  string to s1
	cout<<s<<endl;
   	cout<<s1<<endl;
    string s2(s,2,4);//stores value from 2 to 4
    cout<<s2<<endl;

    //substring
    string s3=s.substr(2,4);
    cout<<s3<<endl;

    //comparing strings
    if(s2.compare(s3)==0){
    	cout<<s1<<" is equal to "<<s2<<endl;
    } else{
    	cout<<s1<<"is not equal to "<<s2<<endl;
    }
    return 0;
}