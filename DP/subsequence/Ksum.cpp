#include<bits/stdc++.h>

using namespace std;

bool f(int n, int arr[], int target){
    if(target==0){
        return true;
    }
    if(n==0) return (arr[0]==target);
 
  
  
    bool notTake=f(n-1,arr,target);
    bool take=false;
    if(arr[n]<=target){
         take= f(n-1, arr,target-arr[n]);
    }

    return take|notTake;


}

int main(){
    int n,target;
    cin>>n>>target;
    vector<int>store;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   cout<< f(n-1,arr,target);
    return 0;
}