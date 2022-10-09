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
    int k;
    string s;
    cin>>s;
    vector<int>arr;
     multimap<int, int> mp;
     unordered_map<int,int>mp2;

    for(int i=0;i<s.length();i++){
        mp.insert(pair<int,int>(s[i],i));
        

    }
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[i+1]){
            arr.push_back(s[i]);
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
       cout<<mp.count('c');
 

    return 0;
}