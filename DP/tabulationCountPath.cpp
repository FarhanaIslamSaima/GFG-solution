#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
     
int dp[a][a];
    dp[0][0]=1;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i==0 && j==0) dp[i][j]=1;
            else{

                    int up=0;
            int left=0;
            if(i>0) up= dp[i-1][j];
            if(j>0) left= dp[i][j-1];
              dp[i][j]=up+left;

            }
       
    
          

        }
    }
    cout<<dp[a-1][a-1];
    return 0;
}