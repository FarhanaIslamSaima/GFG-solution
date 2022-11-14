#include <bits/stdc++.h>

using namespace std;
int f(int n,int target,int arr[]){
    if(n==0){
   if(target==0 && arr[0]==0){
    return 2;
   }
   if(target==0 || target==arr[0]){
    return 1;
   }
   return 0;
    
}





    
  int notTake=f(n-1,target,arr);
  int take=0;
  if(arr[n]<=target){
    take=f(n-1,target-arr[n],arr);
  }
   
    return (notTake+take);

}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int totSum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        totSum+=arr[i];
    }
    if(totSum-k<0) return 0;
    if((totSum-k)%2==1) return 0;
    int target=(totSum-k)/2;
    cout<<f(n-1,target,arr);
    return 0;

}