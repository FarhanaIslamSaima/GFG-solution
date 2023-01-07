#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int f(int a, int b, int ind, int arr[]){

   
    

    if(ind==0){
        if(arr[ind]==-1){
          return -1;
        } 
        else{
            return b*arr[ind];
        }
    }
    

    
  
    
    int notTake=0+f(a,b,ind-1,arr);
    int take=INT_MAX;
    if(arr[ind]!=-1 && (ind+1)<=b ){
       
        take=arr[ind]+f(a,b-ind-1,ind,arr);
        
    }
   
        
     

    
             
    return min(take,notTake);

}
int main(){
    int a,b;
    cin>>a>>b;
    int arr[b];
    int index[b];
    for(int i=0;i<b;i++){
        cin>>arr[i];
        index[i]=i+1;

    }
    cout<<f(a,b,b-1,arr);
    return 0;
}