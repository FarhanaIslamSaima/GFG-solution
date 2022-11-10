#include<bits/stdc++.h>

using namespace std;

int f( int arr[],vector<vector<bool>>&dp,int n, int k){
for(int i=0;i<n;i++){
    dp[i][0]=true;
}

vector<bool>prev(k+1,0);
vector<bool>curr(k+1,0);
prev[0]=curr[0]=true;
prev[arr[0]]=true;


for(int ind=1;ind<n;ind++){
    for(int target=1;target<=k;target++){
         bool notTake=prev[target];
        
    bool take=false;
    if(arr[ind]<=target){
         take= prev[target-arr[ind]];
    }
  

    curr[target]=take|notTake;
   
    }
    prev=curr;
}
return prev[k];


}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>store;
    int arr[n];
    vector<vector<bool>>dp(n,vector<bool>(k+1,0));
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  cout<<f(arr,dp,n-1,k);



    return 0;
}