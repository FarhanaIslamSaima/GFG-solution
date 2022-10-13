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
    string s;
    cin>>s;
    string result;
    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='+'){
                 result.insert(result.begin(),s.begin()+j,s.begin()+i);
        j=i+1;
               result.insert(result.begin(),s[i]);

        }
 
   

    }
  
        result.insert(result.begin(), s.begin() + j,
                                     s.end());
    cout<<result;

    return 0;
}