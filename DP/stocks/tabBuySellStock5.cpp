#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int f(int a,int fee, int arr[],vector<vector<int>>&dp){


    for(int i=a-1;i>=0;i--){
        for(int j=0;j<=1;j++){
            if(j==1){
                dp[i][j]=max(-arr[i]+dp[i+1][0],0+dp[i+1][1]);
            }
            else{
                dp[i][j]=max(arr[i]-fee+dp[i+1][1],0+dp[i+1][0]);
            }
        }
    }
   
    return dp[0][1];


}

int main(){
    int a,fee;
    cin>>a>>fee;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    vector<vector<int>>dp(a+1,vector<int>(2,0));
    cout<<f(a,fee,arr,dp);

    return 0;
}