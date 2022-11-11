#include <bits/stdc++.h>

using namespace std;
int mod =(int)1e9+7;
int f(int n, int target, int arr[]){
  
    if(n==0){
            if(target==0 && arr[0]==0)
            return 2;
        if(target==0 || target == arr[0])
            return 1;
        return 0;
    }

    int notPick=f(n-1,target,arr);
    int pick=0;
    if(arr[n]<=target){
        pick=f(n-1,target-arr[n],arr);
        
    }
    return (pick+notPick)%mod;

}
int main(){
    int n,D;
    cin>>n>>D;
    int arr[n];
    int totSum=0;
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
                totSum+=arr[i];

    }
       if(totSum-D<0) return 0;
    if((totSum-D)%2==1) return 0;
    int target=(totSum-D)/2;
   cout<< f(n-1,target,arr);
    return 0;
}