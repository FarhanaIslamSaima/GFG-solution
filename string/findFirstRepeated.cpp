#include <iostream>
using namespace std;
#include <map>
#include<cstring>
#include <algorithm>
#include <queue>
int main(){
    string str="he had had he";
   string t="";
   string ans="";
   unordered_map<string,int>mp;
   for(int i=str.length()-1;i>=0;i--){
    if(str[i]!=' '){
        t+=str[i];
    }
    else{
        mp[t]++;
        if(mp[t]>1){
            ans=t;
        }
        t="";
    }
   }
   cout<<t;
   mp[t]++;
   if(mp[t]>1){
    ans=t;
   }
   if(ans!=""){
   reverse(ans.begin(),ans.end());
   }

   cout<<ans;
  
    return 0;
}