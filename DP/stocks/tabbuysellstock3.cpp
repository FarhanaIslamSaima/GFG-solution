#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

int f(int a, int arr[],vector<vector<vector<int>>>&dp){
    for(int i=a-1;i>=0;i--){
            for(int j=0;j<=1;j++){
        for(int k=1;k<=2;k++){
           

            if(j==1){
                dp[i][j][k]= max(-arr[i]+dp[i+1][0][k],0+dp[i+1][1][k]);
            }
            else{
                 dp[i][j][k]= max(arr[i]+dp[i+1][1][k-1],0+dp[i+1][0][k]);
            }

        }
    }



} 	
return dp[0][1][2];


}

int main(){
    int a;
    cin>>a;
    int arr[a];
    int cap=2;
    vector<vector<vector<int>>>dp(a+1,vector<vector<int>>(2,vector<int>(3,0)));
    for(int i=0;i<a;i++){
        cin>>arr[i];

    }
      
   
cout<<f(a,arr,dp);
    return 0;
}