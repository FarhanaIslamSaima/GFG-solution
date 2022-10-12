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
    int k;
    string temp="";
    int count=0;
    cin>>s;
    cin>>k;
    for(int i=0;i<k;i++){
    temp+=s;
    }

   
        


           

   

      
           
int r=0;
while(r<temp.length()){
    int l=r+1;
    if(temp[r]=='a'){
       while(l<temp.length()){
        if(temp[l]=='b'){
            count++;
        }
        l++;
       }
    }
    r++;
}
cout<<count;


    return 0;
}