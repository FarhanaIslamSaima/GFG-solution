#include <bits/stdc++.h>

using namespace std;

int f(int a,int b,int ind,int arr[],vector<vector<int>>&dp){
      
     for(int i=1;i<=b;i++){
    if(i%arr[0]==0 && arr[0]!=-1){
    dp[0][i]=i/arr[0];
    }
    else{
        dp[0][i]=-1;
    }
         
    
           
        
     }
   
    
  
    
    
    
  
    

  
  for(int i=1;i<b;i++){
    for(int j=1;j<=b;j++){
         int notTake=dp[i-1][j];
    int take=INT_MAX;
    if(arr[i]<=j && arr[i]!=-1){
        take=arr[ind]+dp[i][j-1];
    }
    dp[i][j]=min(take,notTake);


    }
   
  }
  return dp[b-1][b];
    
   
    

}
int main(){
int a,b;
cin>>a>>b;
int arr[b];
for(int i=0;i<b;i++){
    cin>>arr[i];
}
vector<vector<int>>dp(b,vector<int>(b+1,-1));
cout<<f(a,b,b-1,arr,dp);
    

        

    
 
   
    return 0;
}