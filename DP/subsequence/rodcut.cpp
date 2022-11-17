#include <bits/stdc++.h>

using namespace std;
int f(int n, int k, int arr[]){
    if(n==0){
        return(k/1)*arr[0];
    }

    int notTake=0+f(n-1,k,arr);
    int take=INT_MIN;
    if(k>=n+1){
      take=arr[n]+f(n,k-(n+1),arr);
    }

    return max(take,notTake);


}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int val[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
    cout<<f(n-1,n,arr);
    return 0;
}