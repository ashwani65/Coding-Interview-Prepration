//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//Author: Ashwani Singh
#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> removDuplicate(vector<int > input){
	set<int> s;
	vector<int> result;

	for(int i=0;i<input.size();i++){
		if(s.find(input[i])!=s.end()){
			s.insert(input[i]);
			result.push_back(input[i]);
		}
	}
	return result;
}

int main(){
	int n;
	cin>>n;
	vector<int>v;
	v.resize(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	vector<int> result;
	result=removDuplicate(v);

	vector<int>::iterator it;
	for(it=result.begin();it!=result.end();it++){
		cout<<*it<<endl;
	}
	return 0;
}
