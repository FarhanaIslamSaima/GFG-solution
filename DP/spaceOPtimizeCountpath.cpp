#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a;
    cin>>a;
    vector<int>dp(a,0);
    for(int i=0;i<a;i++){
        vector<int>temp(a,0);
        for(int j=0;j<a;j++){
            if(i==0 && j==0) temp[j]=1;
            else{
                int up=0;
                int left=0;
                if(i>0) up=dp[j];
                if(j>0) left=temp[j-1];
                temp[j]=up+left;
            }
         


        }
        dp=temp;
    }

    cout<<dp[a-1];
    return 0;
}