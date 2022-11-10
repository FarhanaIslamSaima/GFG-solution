#include<bits/stdc++.h>

using namespace std;

bool f(int i,int target ,int arr[],vector<vector<bool>>&dp){
   for(int ind=0;ind<i;ind++){
    dp[ind][0]=true;
   }
   dp[0][arr[0]]=true;
for(int ind=1;ind<i;ind++){

for(int k=1;k<=target;k++){
    bool notTake=dp[i-1][k];
    bool take=false;
    if(arr[ind]<=k){
        take=dp[i-1][k-arr[ind]];
    }
    dp[ind][k]=take|notTake;
       cout<<"ind is : "<<ind<<" target is: "<<k<<" "<<dp[ind][k]<<endl;
       

}

}
    return dp[i-1][target];



}
int main(){
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
int target=sum/2;

 
    vector<vector<bool>>dp(n,vector<bool>(target+1,0));
    cout<<f(n,target,arr,dp);
    return 0;
}