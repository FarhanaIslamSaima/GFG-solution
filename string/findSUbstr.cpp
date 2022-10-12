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
    string str1,str2;
    cin>>str1>>str2;
    string res;
    if(str1.length()<str2.length()){
        swap(str1,str2);
    }
 

int r=0;
int l=0;
while(r<str1.length() && l<str2.length()){
    int num=str2[l];
    if(str2[l]==str1[r]){
        l++;
    }
    else{
        r++;
    }
    if(r==str1.length() && str1[r]!=str2[l]){
        res="False";
    }
    else{
        res="True";
    }
}
cout<<res;




   return 0; 
}