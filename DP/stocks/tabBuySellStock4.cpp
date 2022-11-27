#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

int f(int a,int tranNo, int k,int arr[], vector<vector<int>>&dp){
 


int profit;

for(int i=a-1;i>=0;i--){
    for(int j=tranNo-1;j>=0;j--){
       if(j%2==0){
        dp[i][j]=max(-arr[i]+dp[i+1][j+1],0+dp[i+1][j]);
       }
       else{
        dp[i][j]=max(arr[i]+dp[i+1][j+1],0+dp[i+1][j]);
       }
    }
}

return dp[0][0];





}

int main(){
    int a,k;
    cin>>a>>k;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int tranNo=2*k;
   vector<vector<int>>dp(a+1,vector<int>(tranNo+1,0));
    cout<<f(a,tranNo,k,arr,dp);
    return 0;
}