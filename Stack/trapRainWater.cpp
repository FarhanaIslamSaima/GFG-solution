#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    int maxL[a];
    int maxR[a];
    int waterTrap[a];
  
    for(int i=0;i<a;i++){
        cin>>arr[i];

    }
      maxL[0]=arr[0];
    maxR[a-1]=arr[a-1];
    for(int i=1;i<a;i++){
        maxL[i]=max(maxL[i-1],arr[i]);
    }
    for(int i=a-2;i>=0;i--){
        maxR[i]=max(maxR[i+1],arr[i]);
    }
    int totWater=0;;
    for(int i=0;i<a;i++){
        waterTrap[i]=min(maxL[i],maxR[i])-arr[i];
        totWater+=waterTrap[i];
        


    }
    cout<<totWater;

    return 0;
}