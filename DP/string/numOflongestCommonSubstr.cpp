#include <bits/stdc++.h>

using namespace std;
int f(int ind1,int ind2,string &s1, string &s2, vector<vector<int>>&dp){
    if(ind1<0 || ind2<0){
        return 0;
    }
    if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
    if(s1[ind1]==s2[ind2]){
        return dp[ind1][ind2]=1+f(ind1-1,ind2-2,s1,s2,dp);
    }
    return dp[ind1][ind2]=0+max(f(ind1-1,ind2,s1,s2,dp),f(ind1,ind2-1,s1,s2,dp));

}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int ind1=s1.length();
    int ind2=s2.length();
    vector<vector<int>>dp(ind1,vector<int>(ind2,-1));
    cout<<f(ind1-1,ind2-1,s1,s2,dp);


    
    return 0;
}