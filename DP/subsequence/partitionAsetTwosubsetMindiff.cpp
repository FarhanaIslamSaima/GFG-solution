#include <bits/stdc++.h>

using namespace std;
int f(int n, vector<int>&arr){
int totSum=0;
for(int i=0;i<n;i++){
    totSum+=arr[i];
}
vector<vector<bool>>dp(n,vector<bool>(totSum+1,false));

for(int i=0;i<n;i++){
    dp[i][0]=true;
}
if(arr[0]<=totSum){
    dp[0][totSum]=true;
}
for(int ind=1;ind<n;ind++){
    for(int target=1;target<=totSum;target++){
        bool notTaken=dp[ind-1][target];
        bool taken=false;
        if(arr[ind]<=target){
            taken=dp[ind-1][target-arr[ind]];
        }
        dp[ind][target]=taken|| notTaken;
    }
}
int mini=1e9;
for(int i=0;i<=totSum;i++){
    if(dp[n-1][i]==true){
        mini=min(mini,abs((totSum-i)-i));
    }
}
return mini;

}

int main(){

  vector<int>arr={1,2,3,4};
  int n=arr.size();

  
    cout<<f(n,arr);
    
    return 0;
}