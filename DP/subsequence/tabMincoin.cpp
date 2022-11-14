#include <bits/stdc++.h>

using namespace std;
int f(int n, int k,int arr[],vector<vector<int>>&dp){
    for(int i=0;i<=k;i++){
        if(i%arr[0]==0){
            dp[0][i]=i/arr[0];
               
        }
        else{
            dp[0][i]=INT_MAX;
        
        }
 

    }

    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){
            int notTake=0+dp[i-1][j];
            int take=INT_MAX;
            if(arr[i]<=j){
                take=1+dp[i][j-arr[i]];
              
            }
            dp[i][j]=min(take,notTake);
       

        }
    }
    return dp[n-1][k];

}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    vector<vector<int>>dp(n,vector<int>(k+1,0));
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<f(n,k,arr,dp);
    return 0;
}