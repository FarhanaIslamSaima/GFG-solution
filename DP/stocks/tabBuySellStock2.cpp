#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int f(int ind,int buy,int a, int arr[],  vector<vector<int>>&dp){
    dp[a][0]=dp[a][1]=0;
 


 for(int i=a-1;i>=0;i--){
    for(int j=0;j<=1;j++){
        if(j==1){
            dp[i][j]=max(-arr[i]+dp[i+1][0],0+dp[i+1][1]);
        }
        else{
            dp[i][j]=max(arr[i]+dp[i+1][1],0+dp[i+1][0]);
        }

    }
 }



return dp[ind][buy];

}
int main(){
    int a;
    cin>>a;
    int arr[a];
    vector<vector<int>>dp(a+1,vector<int>(2,0));
    for(int i=0;i<a;i++){
        cin>>arr[i];

    }

    cout<<f(0,1,a-1,arr,dp);
    return 0;
}