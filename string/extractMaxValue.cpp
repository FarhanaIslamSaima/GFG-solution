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
    string temp="";
    int max=0;
 for(char ch:s){
    if(isdigit(ch)){
        temp+=ch;
    }
    else{
       max=std::max(atoi(temp.c_str()),max);
        temp=" ";
    }
 }
 cout<<max;


    return 0;
}