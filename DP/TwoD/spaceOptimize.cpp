#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>>store{
    {10,40,70},
     {20,50,80},
      {30,60,90},
     
    
};

vector<int>dp(4,0);
dp[0]=max(store[0][1],store[0][2]);
dp[1]=max(store[0][0],store[0][2]);
dp[2]=max(store[0][1],store[0][0]);
dp[3]=max(store[0][0],max(store[0][1],store[0][2]));

for(int day=1;day<3;day++){
    vector<int>temp(4,0);
    for(int last=0;last<4;last++){
        temp[last]=0;

        for(int task=0;task<3;task++){
            if(task!=last){
               temp[last]=max(temp[last],store[day][task]+dp[task]);

            }
        }
    }
    dp=temp; 
}
cout<<dp[3];
    return 0;
}