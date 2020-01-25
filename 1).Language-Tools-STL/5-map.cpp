#include<iostream>
#include<map>

using namespace std;
int main(){
	int arr[]={1,2,3,4,5,6,5};
	map<int,int> m;

	for(int i=0;i<7;i++){
		m[arr[i]]=m[arr[i]]+1;
	}
	map<int,int>::iterator it;//it->first(gives you key),it->second(gives you value)
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first<<" :"<<it->second<<endl;
	}
	cout<<endl;
	m.erase(1);//there are various function that you can explore
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first<<" :"<<it->second<<endl;
	}
}
/*
it has been built through BST ,log(n) for finding ,inserting and deleting ,there is also map called 

#include<unordered_map>
unordered_map<int,int>um;
it is build on the top of hash-table
so find(),insert(),delete() takes O(1) time in average case,O(n) in worst case(rare)

isme elements ka order different aa skta h kyounki wo hash-table se bna h unlike normal
map jo ki BST se bna h jo order ka dhayan rakhta h

*/