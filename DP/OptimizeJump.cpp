#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;



int main(){
    int a;
    cin>>a;
    int arr[a];
    int energy=0;
    vector<int>dp(a+1,-1);
    for(int i=0;i<a;i++){
        cin>>arr[i];

    }
    int prev=0;
    int prev2=0;

  
     for(int i=1;i<a;i++){
        int fs=prev+abs(arr[i]-arr[i-1]);
           int ss=INT_MAX;
        if(i>1){
             ss=prev2+abs(arr[i]-arr[i-2]);


        }
       int currI=min(fs,ss);
        prev2=prev;
        prev=currI;

     }
     cout<<prev;
    return 0;
}