//passing vector to a function
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#define done_by_heart ios_base::sync_with stdio(false);
// typedef push_back() pb;
using namespace std;

vector<int> removeduplicate(vector<int> input){
	set<int>s;
	vector<int>result;
	for (int i = 0; i < input.size(); i++)
	{
		if(s.find(input[i])==s.end()){
			s.insert(input[i]);
			result.push_back(input[i]);
		}
	}return result;
}
//we can solve this use one more method that is using sort() funciton
vector<int> removeusingsort(vector <int> input1){
	vector<int> result1;
	sort(input1.begin(),input1.end());
	
	result1.push_back(input1[0]);
	for(int i =1;i<input1.size();i++){
		if(input1[i]!=input1[i-1]){
			result1.push_back(input1[i]);
		}
	}return result1;
}

int main()
{
	// done_by_heart;
	int n;cin>>n;
    vector<int >A(n),B,C;
    for (int i = 0; i < n; i++)
    {
    		cin>>A[i];
    }
    B=removeduplicate(A);
    for(int i=0;i<B.size();i++){
    	cout<<B[i]<<" ";
    }cout<<endl;
    C=removeusingsort(A);
    for(int i=0;i<C.size();i++){
    	cout<<C[i]<<" ";
    }    
    return 0;	
}