#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int f(int ind,int k,vector<int>&dp, int arr[]){
    dp[0]=0;
    int oneJump,twoJump;
    for(int i=1;i<ind;i++){
        int minStep=INT_MAX;
        for(int j=1;j<=k;j++){
                 
        if(i-j>=0){
           int Jump=abs(arr[i]-arr[i-j])+dp[i-j];
             minStep=min(minStep,Jump);
            
        }
      
        
       

        }
           dp[i]=minStep;
    
   


    }
    return dp[ind-1];

}
int main(){
    int a,k;
    cin>>a>>k;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    vector<int>dp(a,0);
    cout<<f(a,k,dp,arr);
    return 0;
}