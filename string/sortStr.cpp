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
    multimap<char,string>mp;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        mp.insert(pair<char,string>(arr[i][0],arr[i]));


    }
     multimap<char, string>::iterator itr;
         for (itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->second<<" ";
        
    }
   

    return 0;
}