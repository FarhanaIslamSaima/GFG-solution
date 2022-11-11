#include <bits/stdc++.h>

using namespace std;
int f(vector<vector<int>>&dp,int wt[], int val[],int n,int k){
    if(n==0){
        if(wt[0]<=k){
            return val[0];
        }
        else{
            return 0;
        }
    }
    if(dp[n][k]!=-1) return dp[n][k];

    int notPick=0+f(dp,wt,val,n-1,k);
    int pick=INT_MIN;
    if(wt[n]<=k){
        pick=val[n]+f(dp,wt,val,n-1,k-wt[n]);
    }

    return dp[n][k]=max(pick,notPick);

}

int main(){
    int n,k;
cin>>n>>k;
int wt[n];
int val[n];
vector<vector<int>>dp(n,vector<int>(k+1,-1));
for(int i=0;i<n;i++){
    cin>>wt[i];
  
}
for(int i=0;i<n;i++){
 
    cin>>val[i];
}
cout<<f(dp,wt,val,n-1,k);
    return 0;
}