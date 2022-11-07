#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int jump(int index,int arr[],int k){
    if(index==0) return 0;
    int left=0;
    int right=0;
    int energy=INT_MAX;
    
   
    for(int i=1;i<=k;i++){
          if(index-i>=0){
                right=jump(index-i,arr,k)+abs(arr[index]-arr[index-i]);
            energy=min(right,energy);

          }
        

        

      
        



    }
      return energy;
      

   

}

int main(){
    int a,k;
    cin>>a>>k;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cout<<jump(a-1,arr,k);

    return 0;
}