#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int f(int ind ,int arr[]){
        int twoJump,oneJump;
   
    if(ind==0){
        return 0;
    }
    oneJump=f(ind-1,arr)+abs(arr[ind]-arr[ind-1]);

    if(ind>1){
        twoJump=f(ind-2,arr)+abs(arr[ind]-arr[ind-2]);
    }
    
    return min(oneJump,twoJump);

}
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cout<<f(a-1,arr);
    return 0;
}