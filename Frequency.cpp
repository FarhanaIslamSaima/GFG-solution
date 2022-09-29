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
vector<int>arr; 
       multimap<int,int> m;
    multimap<int,int>::iterator it;
    unordered_map<int,int>mp;

    for(int i=0;i<a;i++){
        cin>>num;
        arr.push_back(num);

        mp[arr[i]]++;
    }
    sort(arr.begin(),arr.end(),[&](int a,int b){ return mp[a]!=mp[b] ? mp[a]>mp[b] : a>b;});
 

for(int i=0;i<a;i++){
    cout<<arr[i]<<" ";
}



    return 0;
}
//Learnt about lamda expression 