#include<bits/stdc++.h>

using namespace std;

bool f(int n, int arr[], int target, vector<vector<int>>&dp){
    if(target==0){
        return true;
    }
    if(n==0) return (arr[0]==target);
 
  if(dp[n][target]!=-1) return dp[n][target];
  
    bool notTake=f(n-1,arr,target,dp);
    bool take=false;
    if(arr[n]<=target){
         take= f(n-1, arr,target-arr[n],dp);
    }

    return dp[n][target]=take|notTake;


}

int main(){
    int n,target;
    cin>>n>>target;
    vector<int>store;
    int arr[n];
    vector<vector<int>>dp(n,vector<int>(target+1,-1));
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   cout<< f(n-1,arr,target,dp);
    return 0;
}