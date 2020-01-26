//Without using Divison Operator and without using Extra Space
#include<iostream>
using namespace std;
#define done_with_love ios_base::sync_with stdio(0); cin.tie(0);cout.tie(0);
typedef long long ll;
int main()
 {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[n];
        ll prod[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
       }
       
       ll leftproduct=1;
       for(int i=0;i<n;i++){
           prod[i]=leftproduct;
           leftproduct=leftproduct*arr[i];
       }

       ll rightproduct=1;
       for(int i=n-1;i>=0;i++){
           prod[i]=prod[i]*rightproduct;
           rightproduct=rightproduct*arr[i];
        }
       for(int i=0;i<n;i++){
           cout<<prod[i]<<" ";
       }
       cout<<endl;
    }
       return 0;
}