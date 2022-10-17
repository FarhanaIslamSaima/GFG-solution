#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s="move these spaces to beginning";
    string t="";
    string ans="";
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            t+=s[i];
        }
        else{
            ans+=t;
            t="";
        }
    }
    ans+=t;
    cout<<ans;
    return 0;
}