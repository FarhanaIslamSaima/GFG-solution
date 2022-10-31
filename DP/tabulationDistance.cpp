#include <bits/stdc++.h>

using namespace std;

int solveUtil(int n, int k, int arr[],vector<int>&dp){
    dp[0]=0;


for(int i=1;i<n;i++){
    int minStep=INT_MAX;
    for(int j=1;j<=k;j++){
        if(i-j>=0){
            int jump=dp[i-j]+abs(arr[i]-arr[i-j]);
            minStep=min(jump,minStep);
        }


    }
    dp[i]=minStep;
}
return dp[n-1];
}



int main() {


int n,k;
cin>>n>>k;
int arr[n];
vector<int>dp(n,-1);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<solveUtil(n,k,arr,dp);
}