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
int a,b;
cin>>a>>b;
int sum=0;
int num;
int curr;
int target;

int arr[a];
vector<int>count;

unordered_map<int,int>mp;
for(int i=0;i<a;i++){
    cin>>arr[i];

}


for(int i=0;i<a;i++){
         
           if(mp.find(arr[i])==mp.end()){
  mp[arr[i]]=i;
           }
 
    
 

    
       if(mp.find(b-arr[i])!=mp.end() && i!=mp[b-arr[i]]){
        count.push_back(i);
        count.push_back(mp[b-arr[i]]);
        break;
       }
    
}

for(int i=0;i<count.size();i++){
    cout<<arr[count[i]]<<" ";
}










  












       
 



    return 0;
}
