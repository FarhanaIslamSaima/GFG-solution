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

string lowerToupper(string s){
    string temp="";
    int len=s.length();
    for(int i=0;i<len;i++){
      temp+=s[i];
        if(islower(s[i])){
       temp+=(char)toupper(s[i]);
        }
    }
    cout<<temp;
    return temp;



}
string uppertolower(string s){
        int len=s.length();
    for(int i=0;i<len;i++){
        if(isupper(s[i])){
            tolower(s[i]);
        }
    }
    return s;

}
int main(){
    string s;
    cin>>s;
 lowerToupper(s);
    cout<<uppertolower(s);
    
    return 0;
}