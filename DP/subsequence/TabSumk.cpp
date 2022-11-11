#include <bits/stdc++.h>

using namespace std;

int f(int n,int target, int arr[], vector<vector<int>>&dp){
  for(int i=0;i<n;i++){
    dp[i][0]=1;
  }
   if(arr[0]<=target){
    dp[0][arr[0]]=1;
   }

    
for(int i=1;i<n;i++){
    for(int k=1;k<=target;k++){
      int notPick=dp[i-1][k];
      int pick=0;
      if(arr[i]<=k){
        pick=dp[i-1][k-arr[i]];

      }
      dp[i][k]=pick+notPick;
    
    }
}


return dp[n-1][target];


}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    vector<vector<int>>dp(n,vector<int>(k+1,0));
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   f(n,k,arr,dp);
   cout<<dp[n-1][k];

    return 0;
}  