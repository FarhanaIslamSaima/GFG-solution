#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int jump(int ind, int arr[],vector<int>&dp){
    int left,right;
 if(ind==0) return 0;

 if(dp[ind]!=-1)return dp[ind];
    left=jump(ind-1,arr,dp)+abs(arr[ind]-arr[ind-1]);

    if(ind>1){
         right=jump(ind-2,arr,dp)+abs(arr[ind]-arr[ind-2]);

    }

     return dp[ind]= min(left,right);
   

}
int main(){
    int a;
    cin>>a;
    int arr[a];
    int energy=0;
    vector<int>dp(a+1,-1);
    for(int i=0;i<a;i++){
        cin>>arr[i];

    }
    cout<<jump(a-1,arr,dp);
    return 0;
}