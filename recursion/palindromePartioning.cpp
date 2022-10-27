#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
bool isCheck(string s, int start, int end){
    while(start<=end){
        if(s[start++]!=s[end--]){
            return false;
        }
    }
    return true;


}

void palindrome(int ind,string s,vector<string>&store){
    if(ind==s.length()){
        for(auto it : store){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
       

        for(int i=ind;i<s.length();i++){
            if(isCheck(s,ind,i)){
               store.push_back(s.substr(ind,i-ind+1));
               palindrome(i+1,s,store);
               store.pop_back();
                
            }
        }

    }


int main(){
    string s;
    cin>>s;
    vector<string>store;
    palindrome(0,s,store);

    return 0;
}