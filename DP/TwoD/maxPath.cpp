#include <bits/stdc++.h>

using namespace std;

int f(int i,int j, vector<vector<int>> &matrix,vector<vector<int>> &dp){
    if(j<0 || j>=matrix[0].size()){
    return -1e9;
  }
  if(i==0){
    return matrix[0][j];
  }

if(dp[i][j]!=-1) return dp[i][j];
  int up=matrix[i][j]+f(i-1,j,matrix,dp);
   int right=matrix[i][j]+f(i-1,j+1,matrix,dp);
    int left=matrix[i][j]+f(i-1,j-1,matrix,dp);
    return dp[i][j]=max(up,max(left,right));

}

int getMaxPathSum(vector<vector<int>>& matrix){
  int n=matrix.size();
  int m=matrix[0].size();
  int maxi=INT_MIN;
   vector<vector<int>> dp(n,vector<int>(m,-1));
  for(int j=0;j<m;j++){
   int ans=f(n-1,j,matrix,dp);
   maxi=max(ans,maxi);
  }
  return maxi;

}
int main() {

     vector<vector<int>> matrix
    {
        {10, 40, 70},
        {20, 50, 80},
        {30, 60, 90}
    };
  
  cout<<getMaxPathSum(matrix);
}