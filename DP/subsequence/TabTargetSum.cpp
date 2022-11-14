#include <bits/stdc++.h>

using namespace std;

int f(int n,int target,int arr[],vector<vector<int>>&dp){
if(arr[0]==0){
    dp[0][0]=2;
}
else{
    dp[0][0]=1;
}
if(arr[0]!=0 && arr[0]<=target){
    dp[0][arr[0]]=1;
}
for(int i=1;i<n;i++){
    for(int j=0;j<=target;j++){
        int notTake=dp[i-1][j];
        int take=0;
        if(arr[i]<=j){
            take=dp[i-1][j-arr[i]];
        }
        dp[i][j]=take+notTake;
    }
}
    


return dp[n-1][target];

}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int totSum=0;
    vector<vector<int>>dp(n,vector<int>(k+1,0));
    for(int i=0;i<n;i++){
        cin>>arr[i];
        totSum+=arr[i];
    }
    if(totSum-k<0) return 0;
    if((totSum-k)%2==1) return 0;
    int target=(totSum-k)/2;
    cout<<f(n,target,arr,dp);
    return 0;

}