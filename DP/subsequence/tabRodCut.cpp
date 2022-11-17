#include <bits/stdc++.h>

using namespace std;

int f(int n, int k, int arr[], vector<vector<int>>&dp){

    for(int i=0;i<=k;i++){
        dp[0][i]=i*arr[0];
    }
   
    for(int i=1;i<n;i++){
        for(int j=0;j<=k;j++){
            int notTake=0+dp[i-1][j];
            int take=INT_MIN;
            if(j>=i+1){
                take=arr[i]+dp[i-1][j-(i+1)];
            }
            dp[i][j]=max(take,notTake);
        }
    }

return dp[n-1][k];


}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int val[n];
    vector<vector<int>>dp(n,vector<int>(n+1,0));
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
    cout<<f(n,n,arr,dp);
    return 0;
}