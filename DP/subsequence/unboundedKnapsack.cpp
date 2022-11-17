#include <bits/stdc++.h>

using namespace std;
int f(int n,int k, int arr[], int val[]){
  
   if(n==0){
    if(arr[0]<=k){
        return (k/arr[0])*val[0];
    }
    else{
        return 0;
    }
   }
   int notTake=0+f(n-1,k,arr,val);
   int take=INT_MIN;
   if(arr[n]<=k){
    take=val[n]+f(n,k-arr[n],arr,val);
   }

   return max(notTake,take);

}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int val[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      for(int i=0;i<n;i++){
        cin>>val[i];
    }
    cout<<f(n-1,k,arr,val);

    return 0;
}