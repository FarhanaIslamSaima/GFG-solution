#include <iostream>
#include <vector>
using namespace std;



int sum(int a,int arr [], vector<int> &dp){
    dp[0]=arr[0];

    for(int i=1;i<a;i++){

        int take=arr[i];
        if(i>1){
            take+=dp[i-2];
        }
        int notTake=0+dp[i-1];
        dp[i]=max(take,notTake);

    }

    return dp[a-1];

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
    cout<<sum(a,arr,dp);
    return 0;
    
}