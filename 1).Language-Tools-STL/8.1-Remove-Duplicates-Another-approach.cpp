//we think of solution using sort function-and by comparing current elemnt with previous elemnts
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<int> removDuplicate(vector<int > input){
	vector<int> result;
	sort(input.begin(),input.end());

	result.push_back(input[0]);
	for(int i=1;i<input.size();i++){
		if(input[i]!=input[i-1]){
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
