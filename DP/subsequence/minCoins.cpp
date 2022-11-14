#include <bits/stdc++.h>

using namespace std;
int f(int n, int k,int arr[],vector<vector<int>>dp){
 if(n==0){
    if(k%arr[n]==0){
        return k/arr[n];
    }
    else{
        return INT_MAX;
    }

 }
 if(dp[n][k]!=-1) return dp[n][k];
 int notTake=0+f(n-1,k,arr,dp);
 int take=INT_MAX;
 if(arr[n]<=k){
    take=1+f(n,k-arr[n],arr,dp);
 }
 return dp[n][k]=min(take,notTake);



}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    vector<vector<int>>dp(n,vector<int>(k+1,-1));
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<f(n-1,k,arr,dp);
    return 0;
}