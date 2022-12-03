#include <bits/stdc++.h>

using namespace std;

int f(int ind, int a,int prev_ind, int arr[],vector<vector<int>>dp){
    if(ind==a){
      return 0;
    }



for(int ind=a-1;ind>=0;ind--){
    for(int prev_ind=ind-1;prev_ind>=-1;prev_ind--){
         int len=0+dp[ind+1][prev_ind+1];
        if(prev_ind==-1||arr[ind]>arr[prev_ind]){
            len=max(len,1+dp[ind+1][ind+1]);
        }
        dp[ind][prev_ind+1]=len;
    }
}


   
    

return dp[0][-1+1];


}
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    vector<vector<int>>dp(a+1,vector<int>(a+1,0));
    cout<<f(0,a,-1,arr,dp);

    return 0;
}