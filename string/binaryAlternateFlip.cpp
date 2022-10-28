#include <bits/stdc++.h>
using namespace std;
#define MAX 26
int main(){
    string s;
    cin>>s;
    int flip=0;
    int l=0;
    int r=1;
 
    while(r<s.length() && l<s.length()){
     
        if(s[l]==s[r]){
            flip+=1;
            s[lgs]=='0'?s[l]='1':s[l]='0';
        }
        l++;
        r=l+1;
    }
    cout<<flip;
    return 0;
}