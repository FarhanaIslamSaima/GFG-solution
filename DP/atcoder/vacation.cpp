#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int f(int day,int last,vector<vector<int>>&arr){
   
  if(day==0){
     int maxi=INT_MIN;
    for(int i=0;i<3;i++){
       
        if(i!=last){
            maxi=max(maxi,arr[0][i]);
           
            
        }
    }
     return maxi;
  }
    int maxi=INT_MIN;
    for(int i=0;i<last;i++){
        if(i!=last){
            int totSum=arr[day][i]+f(day-1, i, arr);
            maxi=max(maxi,totSum);

        }
    }

    return maxi;
   
}
int main(){
    int a;
    cin>>a;
    
    vector<vector<int>> arr
    {
        {10, 40, 70},
        {20, 50, 80},
        {30, 60, 90}
    };
    int MAX=INT_MIN;

     cout<<f(a-1,3,arr);
    
    return 0;
}