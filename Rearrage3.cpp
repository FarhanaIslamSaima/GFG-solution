#include <iostream>
#include <map>
#include<string.h>
#include <limits.h>
#include <vector>
#include <bits/stdc++.h>
#include<array> 
#include <unordered_map>
#include<cmath>

 
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[a];
    int temp[a];
   
    for(int i=0;i<a;i++){
        cin>>arr[i];
       temp[i]=arr[i];
        
    }
  
    int l=0;
    int r=a-1;
    int j=0;
    int k=a-1;
  
  
 
     for(int i=0;i<a;i++){
        while(l<r){
            if(arr[l]<0 && arr[r]>0){
                swap(arr[l],arr[r]);
            }
            else{
                l++;
                r--;
            }
        }

        while(j<k){
            swap(arr[j],arr[k]);
            j+=2;
            k-=2;
            
        }
      

   
 }





   
     
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
      
    }
  



    return 0;
}