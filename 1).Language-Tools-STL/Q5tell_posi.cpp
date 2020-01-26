#include<bits/stdc++.h>
using namespace std;
bool sortinrev(const pair<long long ,string> &a,
               const pair<long long ,string> &b)
{
       return (a.first > b.first);
};
int main()
{
	long long  n;
	cin>>n;
	//char c ='a';
	//char b ='w';
	//scanf("%c",&c);
	string str[n];
	vector < pair < long long , string > > v(n);
	for(int i=0;i<n;i++)
	{
		int x,y,z;
		long long  sum;
		cin>>str[i];
		//scanf("%c",&b);
		cin>>x>>y>>z;
		sum=x+y+z;
		v[i].first=sum;
		v[i].second=str[i];
	}
	stable_sort(v.begin(),v.end(), sortinrev);
	int k=1;
	 for (int i=0; i<n; i++)
    {
        cout <<(i+1)<<" "<<v[i].second<<endl;
    }
}