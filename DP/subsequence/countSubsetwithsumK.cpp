#include <bits/stdc++.h>

using namespace std;

int f(int n,int target, int arr[]){
    if(n==0){
        return(arr[0]==target);
    }
    if(target==0){
        return 1;

    }
    int notPick=f(n-1,target,arr);
    int pick=0;
    if(arr[n]<=target){
        pick=f(n-1,target-arr[n],arr);
    }
    return pick+notPick;


}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    vector<vector<int>>store;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<< f(n-1,k,arr);

    return 0;
}  