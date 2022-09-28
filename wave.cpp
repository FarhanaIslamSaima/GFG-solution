#include <iostream>
#include <map>
#include<string.h>
#include <limits.h>
#include <vector>
#include <bits/stdc++.h>
#include<array> 
#include <unordered_map>
#include<cmath>


using namespace std;
int main(){

int a,num;
vector<int>store;
cin>>a;
for(int i=0;i<a;i++){
    cin>>num;
    store.push_back(num);
}



for(int i=0;i<a-1;i++){
    int l=i-1;
    int r=i+1;
    if(i%2==0){
       if(store[i]<store[i+1]){
            swap(store[i],store[i+1]);
       }
      
        
        
           }
           else{
              if(store[i]>store[i+1]){
            swap(store[i],store[i+1]);
       }
           }
}

for(int i=0;i<a;i++){
    cout<<store[i]<<" ";
}



return 0;
}