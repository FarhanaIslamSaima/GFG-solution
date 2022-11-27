#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

int f(int ind, int a, int k, int buy,int arr[]){
    if(ind==a || k==0){
        return 0;

    }
    int profit;
    if(buy==1){
        profit=max(-arr[ind]+f(ind+1,a,k,0,arr),0+f(ind+1,a,k,1,arr));

    }
    else{
  profit=max(arr[ind]+f(ind+1,a,k-1,1,arr),0+f(ind+1,a,k,0,arr));
    }


  return profit;



}

int main(){
    int a,k;
    cin>>a>>k;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cout<<f(0,a,k,1,arr);
    return 0;
}