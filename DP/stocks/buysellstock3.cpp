#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int f(int ind,int buy,int a, int arr[],int cap){
    if(ind==a|| cap==0){
        return 0;
    }
 
int profit=0;
if(buy==1){
    return max(-arr[ind]+f(ind+1,0,a,arr,cap),0+f(ind+1,1,a,arr,cap));


}
else{
    return max(arr[ind]+f(ind+1,1,a,arr,cap-1),0+f(ind+1,0,a,arr,cap));
}



}
int main(){
    int a;
    cin>>a;
    int arr[a];
    int cap=2;
    for(int i=0;i<a;i++){
        cin>>arr[i];

    }
    cout<<f(0,1,a-1,arr,cap);
    return 0;
}