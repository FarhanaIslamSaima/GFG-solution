#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void permute(int ind,int arr[],int a){
    if(ind==a){
        for(int i=0;i<a;i++){
            cout<<arr[i];
        }
        cout<<endl;
        return;
    }
    for(int i=ind;i<a;i++){
      
    
       swap(arr[ind],arr[i]);
       cout<<"i is: "<<i<<" ";
           cout<<"index is: "<<ind<<" ";
      
        permute(ind+1,arr,a);
               swap(arr[ind],arr[i]);
       
      
        
       
       
    
   
       
  

    }

}
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    permute(0,arr,a);
    return 0; 
}