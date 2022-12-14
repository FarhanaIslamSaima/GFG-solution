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
stack<int>s;
for(int i=a-1;i>=0;i--){

    if(s.size()==0){
        v.push_back(-1);
    }
    else if(s.size()>0 && s.top()<arr[i]){
        v.push_back(s.top());
    }
    else if(s.size()>0 && s.top()>=arr[i]){
        while(s.size()>0 && s.top()>=arr[i]){
            s.pop();
        }
        if(s.size()==0){
            v.push_back(-1);
        }
        else{
            v.push_back(s.top());
        }
    }
           s.push(arr[i]);
 

}
reverse(v.begin(),v.end());

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
    return 0;
}