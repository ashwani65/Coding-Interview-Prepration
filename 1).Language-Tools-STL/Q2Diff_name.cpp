//Given a one and only string and you have to count and print the name which are repeating
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
	getline(cin,str);
    string s="";
    int count=0,flag=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==' ')
            count++;
    }
   // cout<<" count is "<<count<<endl;
    int p=count+1,k=0;
    //cout<<" p is "<<p<<endl;
    vector < string > v(p);
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!=' ')
            s=s+str[i];
        else if(str[i]==' ')
        {
            v[k]=s;
            k++;
            s.clear();
        }
        if(i==str.size()-1)//this case is for last word 
        {
            v[k]=s;
            k++;
            s.clear();
        }
    }
    //for(int i=0;i<k;i++)
    //cout<<v[i]<<endl;
    map < string , int > mp;
    map < string , int > :: iterator it;
    for(int i=0;i<k;i++)
        mp[v[i]]++;
    for(int i=0;i<k;i++)
    {
        for(it=mp.begin();it!=mp.end();it++)
        {
            //https://www.geeksforgeeks.org/map-count-function-in-c-stl/
            if((mp.count(v[i])&&(mp[v[i]]>=2)))
			{
                cout<<v[i]<<" "<<mp[v[i]]<<endl;
                mp.erase(v[i]);
                flag=1;
            }
        }
    }
    if(flag==0)
        cout<<-1<<endl;

	return 0;
}
