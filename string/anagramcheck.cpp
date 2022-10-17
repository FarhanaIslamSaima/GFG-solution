#include <iostream>
#include <algorithm>
using namespace std;
const int MAX_CHAR=26;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    string res;
  unordered_map<string,int>mp;
  if(s1.length()!=s2.length()){
    res="No";
  
  }else{
    for(int i=0;i<s1.length();i++){
     mp[s1.substr(i,1)]++;
}
for(int j=0;j<s2.length();j++){
    if(mp.find(s2.substr(j,1))!=mp.end()){
        res="ANAGRAM";
    }
    else{
        res="NO";
        break;
    }
}



  }

cout<<res;
    return 0;
}