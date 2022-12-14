#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;



int main(){
    
int a;
cin>>a;
int arr[a];
for(int i=0;i<a;i++){
    cin>>arr[i];
}
vector<int>v;
stack<pair<int,int>>s;

for(int i=0;i<a;i++){
    if(s.size()==0){
        v.push_back(-1);
    }
    else if(s.size()>0 && s.top().first>arr[i]){
        v.push_back(s.top().second);
    }
    else if(s.size()>0 && s.top().first<=arr[i]){
        while(s.size()>0 && s.top().first<=arr[i]){
            s.pop();
        }
        if(s.size()==0){
            v.push_back(-1);
        }
        else{
            v.push_back(s.top().second);
        }
    }
    s.push({arr[i],i});
}
for(int i=0;i<v.size();i++){
   cout<<i-v[i]<<" ";
}


    return 0;
}