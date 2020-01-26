//Warm Reception
#include<bits/stdc++.h>
using namespace std;

struct interval{
  int st;
  int et;
};

int main() {
  int t;
  cin>>t;
  int counter = 0;
  interval ar[t];
  for(int i = 0;i<t;i++){
    cin>>ar[i].st;
  }
  for(int i = 0;i<t;i++){
    cin>>ar[i].et;
  }
  int max = 0;
  for(int i = 0;i<2400;i++){
    for(int j = 0;j<t;j++){
      if(i==ar[j].st){
        counter++;
        if(max<counter){
          max = counter;
        }
      }
    }
    for(int j = 0;j<t;j++){
      if(i==ar[j].et){
        counter--;
        if(max<counter){
          max = counter;
        }
      }
    }
  }
cout<<max;
return 0;
}