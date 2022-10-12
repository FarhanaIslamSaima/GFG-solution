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
const int MAX_CHAR=26;
int main(){
    string s;
    int k;
    cin>>k;
    cin>>s;
       int freq[MAX_CHAR]={0};
    for(int i=0;i<s.length();i++){
     
    freq[s[i]-'a']++;
    }
        for(int j=0;j<s.length();j++){
        
            if(freq[s[j]-'a']>=k){
                cout<<s[j];
            }
        }
    

    return 0;
}