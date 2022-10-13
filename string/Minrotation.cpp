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
    int count=0;
  

    cin>>s;
      string temp=s;
 for(int i=1;i<s.length()+1;i++){
      count++;
      s=temp;
        reverse(s.begin(),s.begin()+i);
        reverse(s.begin()+i,s.end());
        reverse(s.begin(),s.end());
     
     
    if(s==temp){
        
        break;
    }

    }
    cout<<count;
    return 0;
}