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
    int a;
    cin>>a;
    string arr[a];
    multimap<int, string> mp;
    for(int i=0;i<a;i++){
        cin>>arr[i];

         mp.insert(pair<int, string>(arr[i].length(), arr[i]));
    }
         multimap<int, string>::iterator itr;
        for (itr = mp.begin(); itr != mp.end(); ++itr) {
        cout <<itr->second<<" ";
         
    }
  


    return 0;
}