#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int countPath(int i, int j,vector<vector<int>>&dp){

    if(i==0 && j==0){
        return 1;
    }
    if(i<0 || j<0){
        return 0;
    }
    if(dp[i][j]!=-1) return dp[i][j];
     int up=countPath(i-1,j,dp);
     int left=countPath(i,j-1,dp);
     dp[i][j]=up+left;

     return dp[i][j];
   


  

}
int main(){
    int a;
    cin>>a;
    vector<vector<int>>dp(a,vector<int>(a,-1));
cout<<countPath(a-1,a-1,dp);

    return 0;
}