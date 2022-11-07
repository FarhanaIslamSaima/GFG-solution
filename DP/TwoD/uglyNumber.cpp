#include <iostream>
#include <vector>
using namespace std;

int uglyNumber(int n, vector<int>&dp){
   
dp[1]=1;

int p2=1;
int p3=1;
int p5=1;

for(int i=2;i<=n;i++){
    int f2=2*dp[p2];
    int f3=3*dp[p3];
    int f5=5*dp[p5];
    int MIN=std::min(f2,std::min(f3,f5));

    if(MIN==f2){
        p2++;
    }
    if(MIN==f3){
        p3++;
    }
    if(MIN==f5){
        p5++;
    }
    dp[i]=MIN;
}

    return dp[n];
    
    }

int main(){
    
    int n;
    cin>>n;
    vector<int>dp(n+1);


   cout<< uglyNumber(n,dp);
    return 0;
}