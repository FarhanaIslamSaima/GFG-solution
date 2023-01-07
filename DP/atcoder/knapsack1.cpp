#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int f(int ind,int target ,int w[],int v[]){
   if(ind==0){
    if(w[0]<=target){
        return v[0];
    }
    else{
        return 0;
    }
   }

   int notTake=0+f(ind-1,target,w,v);
   int take=INT_MIN;
   if(w[ind]<=target){
    take=v[ind]+f(ind-1,target-w[ind],w,v);
   }
   return max(take,notTake);
}
int main(){
    int a,k;
    cin>>a>>k;
    int w[a];
    int v[a];
    for(int i=0;i<a;i++){
        cin>>w[i];
    }
       for(int i=0;i<a;i++){
        cin>>v[i];
    }
    cout<<f(a-1,k,w,v);
    return 0;
}