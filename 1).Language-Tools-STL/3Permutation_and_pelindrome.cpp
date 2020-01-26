//https://www.codechef.com/problems/PERMPAL
#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;
char getchar(int i){
	return (char)(i+97);
}

void printPelindromic(string s){
	
	map<char,vector<int>> indexesmap;
	for(int i=0;i<s.length();i++){
		indexesmap[s[i]].push_back(i+1);
	}
	int odd_freq_count=0;
	for(int i=0;i<26;i++){
		
		if(indexesmap[getchar(i)].size()%2!=0){
			odd_freq_count++;
		}
	}
	if(odd_freq_count>=2){
		cout<<"-1";
		return ;
	}
	int ans[s.length()];
	int start=0;
	int end=s.length()-1;
	for(int i=0;i<26;i++){
		char currentchar = getchar(i);
		
		for(int j=0;j<indexesmap[currentchar].size();j+=2){
			
			if(indexesmap[currentchar].size()-j==1){
				ans[s.length()/2]=indexesmap[getchar(i)][j];
				continue;
			}
			//standard procedure for even frequency elements
			ans[start]=indexesmap[currentchar][j];
			ans[end]=indexesmap[currentchar][j+1];
			start++;
			end--;
		}
	}
	rep(i,s.length()){
		cout<<ans[i]<<" ";
	}
	return ;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		printPelindromic(s);
		cout<<endl;
	}
	return 0;
}
//For checking wether it is possible to make string palindrome then we need to count frequency of each element then ,there must be only one elment with odd frequency
//we are using j+=2 becoz every time we are storing a pair,one at low and one at high 
// if(indexesmap[currentchar].size()-j==1) means j reached to (last-1) means if size()-j==1 means indexvector is of odd frequency 
