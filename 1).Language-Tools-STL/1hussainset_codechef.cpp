//https://www.codechef.com/problems/COOK82C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int m,n;
	cin>>n>>m;
	vector<ll> A(n);
	for (int i = 0; i < n; i++)
	{
		cin>>A[i];
	}
	sort(A.begin(),A.end());
	queue<ll> q;
	int count_m=0;//maintain count of m for all the queries
	int end_p=n-1;//maintain end pointer common to all the queries
	while(m--){
		int  curr_m;
		cin>>curr_m;// 1 4 6 8 etc we know that curr_m is in chronological order i.e next curr_m will be greater than this
		int ans;
		for(;count_m<curr_m;count_m++){
			
			if(end_p>=0&&(q.empty()||(A[end_p]>=q.front()))){
				ans=A[end_p];
				end_p--;
			}else {
				ans=q.front();
				q.pop();
			}q.push(ans/2);
		}
		cout<<ans<<endl;
	}return 0;;;;
}