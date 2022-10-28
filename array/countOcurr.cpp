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
    int a,k;
    cin>>a;
    cin>>k;
    int count=0;
    int num=a/k; 
    int arr[a];
    unordered_map<int,int>mp;
    for(int i=0;i<a;i++){
        cin>>arr[i];
       mp[arr[i]]++;
      
        
        
    }
    for (auto i : mp){
        if(i.second>num){
            count++;
        }
    }
    cout<<count;
 
    return 0;
   



}