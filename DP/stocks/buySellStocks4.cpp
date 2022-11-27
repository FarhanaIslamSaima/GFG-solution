#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

int f(int ind,int transaction, int a, int k,int arr[]){
    if(ind==a || transaction==2*k){
        return 0;

    }
    int profit;
    if(transaction%2==0){
        profit=max(-arr[ind]+f(ind+1,transaction+1,a,k,arr),0+f(ind+1,transaction,a,k,arr));

    }
    else{
  profit=max(arr[ind]+f(ind+1,transaction+1,a,k,arr),0+f(ind+1,transaction,a,k,arr));
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
    cout<<f(0,0,a,k,arr);
    return 0;
}