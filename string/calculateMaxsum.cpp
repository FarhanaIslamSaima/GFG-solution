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
    int sum=s[0]-'0';

       for(int i=1;i<s.length();i++){
        if(s[i]=='0' || s[i]=='1'||sum<2){
            sum+=(s[i]-'0');
     
     
            
        }
        else{
            sum*=(s[i]-'0');
        
        }
    }
    cout<<sum;
 

    return 0;
}