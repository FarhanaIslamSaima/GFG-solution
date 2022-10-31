#include <iostream>
#include <vector>
using namespace std;


int sum(int ind, int arr[], int MAX,vector<int>&dp){
 
 if(ind==0) return arr[ind];
 if(ind<0) return 0;
 if(dp[ind]!=-1)return dp[ind];

 int pick=arr[ind]+sum(ind-2,arr,MAX,dp);

 int notPick=0+sum(ind-1,arr,MAX,dp);




 dp[ind]=max(pick,notPick);

return dp[ind];




}

int main(){
    int a;
    cin>>a;
    int arr[a];
    int MAX=0;
    vector<int>store;
    vector<int>dp(a,-1);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cout<<sum(a-1,arr,MAX,dp);
    return 0;
}