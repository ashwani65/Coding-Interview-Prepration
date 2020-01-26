#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
vector<int> getVoters(int *arr,int n){
	sort(arr,arr+n);
	map<int,int> m;
	rep(i,n){
		m[arr[i]]++;
	}
	vector<int>v;
	map<int,int>::iterator it;
	for(it=m.begin();it!=m.end();it++){
		if(it->second>=2){
			v.push_back(it->first);
		}
	}
	return v;
}

int main(){
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int l=n1+n2+n3;
	int arr[l];
	// v.resize(l);
	rep(i,l){
		cin>>arr[i];
	}
	vector<int>voters=getVoters(arr,l);
	cout<<voters.size()<<endl;
	vector<int>::iterator vit;
	for(vit=voters.begin();vit!=voters.end();vit++){
		cout<<*vit<<endl;
	}
	return 0;
}