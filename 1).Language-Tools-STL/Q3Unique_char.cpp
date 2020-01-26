#include<bits/stdc++.h>
using namespace std;

char*uniqueChar(char *str){
    vector < char > v;
    int n;
    n=strlen(str);
    map < char , int > mp;
    for(int i=0;i<n;i++){
        mp[str[i]]++;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(mp[str[i]])
        {
            v.push_back(str[i]);
            mp.erase(str[i]);
        }
    }
    int d=v.size();
    //char s[d];
      char *s = (char *) malloc(sizeof(char) * d);
    for(int i=0;i<d;i++)
        s[i]=v[i];
    return s;
}

int main(){
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace  std;
int main()
{
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    map<char,int>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first;
    }
    return 0;
}

Leetcode-Remove Duplicate question
It is my solution but giving some error and I also know the why it has been occures I'll fix it later
class Solution {
public:
    string removeDuplicateLetters(string s) {
    map<char,int>m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    map<char,int>::iterator it;
    string aux="";
    for(it=m.begin();it!=m.end();it++){
        aux+=it->first;
    }
    return aux;
    }
};
*/