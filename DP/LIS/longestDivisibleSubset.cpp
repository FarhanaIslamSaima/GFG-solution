#include <bits/stdc++.h>

using namespace std;
int f(int a ,int ind,int prev_ind,int arr[]){
    if(ind==a){
        return 0;

    }
    
     int len=0+f(a,ind+1,-1,arr);
    if(prev_ind==-1|| arr[ind]>arr[prev_ind]){
        len=max(len,1+f(a,ind+1,ind,arr));
    }
    
    return len;


}
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    
    cout<<f(a-1,0,-1,arr);

    return 0;
}