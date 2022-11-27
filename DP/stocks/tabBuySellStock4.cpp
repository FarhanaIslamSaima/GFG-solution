#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

int f(int a, int k,int arr[],vector<vector<vector<int>>>&dp){
 
   

    for(int i=a-1;i>=0;i--){
        for(int j=0;j<=1;j++){
            for(int p=1;p<=k;p++){
                if(j==1){
                    dp[i][j][p]=max(-arr[i]+dp[i+1][0][p],0+dp[i+1][1][p]);

                }
                else{
                    dp[i][j][p]=max(arr[i]+dp[i+1][1][p-1],0+dp[i+1][0][p]);
                }
            }
        }
    }



  return dp[0][1][k];



}

int main(){
    int a,k;
    cin>>a>>k;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    vector<vector<vector<int>>>dp(a+1,vector<vector<int>>(2,vector<int>(k+1,0)));
    cout<<f(a,k,arr,dp);
    return 0;
}