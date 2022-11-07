#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
vector<vector<int>>store{
    {10,40,70},
     {20,50,80},
      {30,60,90},
     
    
};
    vector<vector<int>>dp(n,vector<int>(4,0));
    dp[0][0]=max(store[0][1],store[0][2]);
    dp[0][1]=max(store[0][0],store[0][2]);
    dp[0][2]=max(store[0][1],store[0][0]);
    dp[0][3]=max(store[0][0],max(store[0][1],store[0][2]));

    for(int day=1;day<n;day++){
        for(int last=0;last<4;last++){
             dp[day][last]=0;
            
            for(int task=0;task<3;task++){
                if(task!=last){
                  int point=store[day][task]+dp[day-1][task];
                 dp[day][last]=max(dp[day][last],point);


                }
            }
          
        }
    }
    cout<<dp[n-1][3];


    return 0;
}