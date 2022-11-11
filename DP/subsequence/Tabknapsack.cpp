#include <bits/stdc++.h>

using namespace std;
int f(vector<vector<int>>&dp,int wt[], int val[],int n,int k){
for(int i=wt[0];i<k;i++){
    dp[0][i]=val[0];
}
    for(int i=1;i<n;i++){
        for(int j=0;j<=k;j++ ){
            int notTake=0+dp[i-1][j];
            int take=INT_MIN;
            if(wt[i]<=j){
                take=val[i]+dp[i-1][j-wt[i]];
            }
            dp[i][j]=max(take,notTake);
        }
    }
    return dp[n-1][k];

}

int main(){
    int n,k;
cin>>n>>k;
int wt[n];
int val[n];
vector<vector<int>>dp(n,vector<int>(k+1,0));
for(int i=0;i<n;i++){
    cin>>wt[i];
  
}
for(int i=0;i<n;i++){
 
    cin>>val[i];
}
cout<<f(dp,wt,val,n,k);
    return 0;
}