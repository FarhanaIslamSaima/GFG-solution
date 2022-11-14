#include<bits/stdc++.h>

using namespace std;

int maxChocoUtil(int i, int j1, int j2, int n, int m, vector < vector < int >> 
& grid, vector < vector < vector < int >>> & dp) {
  
  if(j1<0 || j1>=m || j2<0 || j2>=m){
    return -1e9;

  }
  if(i==n-1){
    if(j1==j2){
        return grid[i][j1];
    }
    else{
        return grid[i][j1]+grid[i][j2];
    }
  }
  if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
  int maxi=-1e9;

  for(int dj1=-1;dj1<=1;dj1++){
    for(int dj2=-1;dj2<=1;dj2++){
        int ans;
        if(j1==j2){
            ans=grid[i][j1];
        }
        else{
            ans=grid[i][j1]+grid[i][j2];
        }
        ans+=maxChocoUtil(i+1,j1+dj1,j2+dj2,n,m,grid,dp);
        maxi=max(maxi,ans);

    }
  }
  return dp[i][j1][j2]=maxi;
}

int maximumChocolates(int n, int m, vector < vector < int >> & grid) {

  vector < vector < vector < int >>> dp(n, vector < vector < int >> (m, vector < int
  > (m, -1)));

  return maxChocoUtil(0, 0, m - 1, n, m, grid, dp);
}

int main() {

   vector<vector<int> > matrix{
      {2,3,1,2},
      {3,4,2,2},
      {5,6,3,5},
  };

  int n = matrix.size();
  int m = matrix[0].size();

  cout << maximumChocolates(n, m, matrix);
}