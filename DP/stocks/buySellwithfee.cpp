#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int f(int ind,int a,int buy,int fee, int arr[]){
    if(ind==a){
        return 0;
    }
    int profit;
    if(buy==1){
        profit=max(-arr[ind]+f(ind+1,a,0,fee,arr),0+f(ind+1,a,1,fee,arr));
    }
    else{
        profit=max(arr[ind]-fee+f(ind+1,a,1,fee,arr),0+f(ind+1,a,0,fee,arr));
    }

    return profit;


}

int main(){
    int a,fee;
    cin>>a>>fee;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cout<<f(0,a,1,fee,arr);

    return 0;
}