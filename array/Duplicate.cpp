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
    cin>>a;
    int arr[a];
vector<int>store;
   
for(int i=0;i<a;i++){
    cin>>arr[i];
}
int i=0;
while(i<a){

    int index=abs(arr[i])-1;
    if(arr[index]<0){
        store.push_back(abs(index+1));
     
    }
        
      arr[index]=-arr[index];
      i++;

   

           



         
         

 
}
for(int i=0;i<store.size();i++){
    cout<<store[i]<<" ";
}
    


return 0;
}
