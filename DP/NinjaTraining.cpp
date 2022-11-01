#include <iostream>
#include <vector>
using namespace std;

int f(int day,int last,vector<vector<int>>&store,vector<vector<int>>&dp){


if(day==0){
    int maxi=0;
  
    for(int i=0;i<3;i++){
        if(i!=last){
            maxi=std::max(last,store[day][i]);
            
        }
    }
    return maxi;

}

int maxi=0;
if(dp[day][last]!=-1) return dp[day][last];

for(int i=0;i<3;i++){
    if(i!=last){
        int task=store[day][i]+f(day-1,i,store,dp);      
         maxi=std::max(maxi,task);
    }
  
}
return dp[day][last]=maxi;

}
int main(){


    int a=2;

   
vector<vector<int>>store{
    {10,40,70},
     {20,50,80},
      {30,60,90},
     
    
};
vector<vector<int>>dp(3,vector<int>(4,-1));
 

 cout<<f(2,3,store,dp);
    return 0;
}