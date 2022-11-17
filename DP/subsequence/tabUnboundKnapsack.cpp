#include <bits/stdc++.h>

using namespace std;
int f(int n,int k, int arr[], int val[],vector<vector<int>>&dp){
  
for(int i=0;i<=k;i++){
    dp[0][i]=(i/arr[0])*val[0];
 
}

for(int i=1;i<n;i++){
    for(int j=0;j<=k;j++){
        int notTake=0+dp[i-1][j];
        int take=INT_MIN;
        if(arr[i]<=j){
            take=val[i]+dp[i][j-arr[i]];
        }
        dp[i][j]=max(take,notTake);

    }
}
return dp[n-1][k];

}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int val[n];
    vector<vector<int>>dp(n,vector<int>(k+1,0));
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      for(int i=0;i<n;i++){
        cin>>val[i];
    }
    cout<<f(n-1,k,arr,val,dp);

    return 0;
}
//I can't write the base cases 