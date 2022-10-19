#include <bits/stdc++.h>
#define MAX 26
using namespace std;
int main(){
    string s1,s2;
    int k;
    int result=0;
    cin>>s1>>s2>>k;

    int count1[MAX]={0};
    int count2[MAX]={0};
    for(int i=0;i<s1.length();i++){
        count1[s1[i]-'a']++;
    }
      for(int i=0;i<s2.length();i++){
        count2[s2[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        int ans=count1[i]-count2[i];
        if(ans>0){
            result+=ans;
        }
    }
    if(result<=k){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
 

    
    return 0;
}