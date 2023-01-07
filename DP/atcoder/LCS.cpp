#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int f(int len1,int len2,string s1, string s2,vector<vector<int>>&dp){
    for(int i=0;i<=len1;i++){
        dp[i][0]=0;
    }
     for(int i=0;i<=len2;i++){
        dp[0][i]=0;
    }
     
   for(int i=1;i<=len1;i++){
    for(int j=1;j<=len2;j++){
        if(s1[i-1]==s2[j-1]){
            dp[i][j]=1+dp[i-1][j-1];
        }
        else{
 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
       
    }
   }
   int len=dp[len1][len2];
   string temp="";
   for(int i=0;i<len;i++){
    temp+='$';
   }


   

}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int len1=s1.length();
    int len2=s2.length();
    vector<vector<int>>dp(len1+1,vector<int>(len2+1,0));
    cout<<f(len1,len2,s1,s2,dp);
    return 0;
}