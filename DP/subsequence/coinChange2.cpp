#include <bits/stdc++.h>

using namespace std;
int f(int n, int target,int arr[]){

if(n==0){
return (target%arr[n]==0);

}
int notTake=f(n-1,target,arr);
int take=0;
if(arr[n]<=target){
    take=f(n,target-arr[n],arr);

}
cout<<"Take is:"<<take<<endl;
cout<<"NotTake is: "<<notTake<<endl;
return take+notTake;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<f(n-1,k,arr);
    return 0;
}