#include<bits/stdc++.h>

using namespace std;

bool f(int i,int target ,int arr[]){
    if(target==0){
        return true;
    }
      if(i==0) return (arr[0]==target);
    bool notTake=f(i-1,target,arr);
    bool take=false;
    if(arr[i]<=target){
        take=f(i-1,target-arr[i],arr);

    }
    return take|notTake;



}
int main(){
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
   if(sum%2!=0) return false;
   int target=sum/2;
    cout<<f(n-1,target,arr);
    return 0;
}