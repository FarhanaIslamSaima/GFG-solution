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
    cin>>a;
    int max=0;
    vector<int> num;
    unordered_map<int,int>mp;
     unordered_map<int,int>mp2;
    for(int i =0;i<a;i++){

        cin>>b;
        num.push_back(b);

        mp[num[i]]++;
        if(mp[num[i]]>a/2){
            cout<<num[i];
        }
      
    }
  

   







    return 0;
}