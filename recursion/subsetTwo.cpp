#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void subSet(int ind, int arr[], int n, vector<int> &store){

        for(auto it: store){
            cout<<it<<" ";
        }
        cout<<endl;
  
    for(int i=ind;i<n;i++){
        if(i!=ind && arr[i]==arr[i-1]) continue;
        store.push_back(arr[i]);
        subSet(i+1,arr,n,store);
        store.pop_back();
         


    }

}
int main(){
    int a;
    cin>>a;
    int arr[a];
    vector<int>store;
    for(int i=0;i<a;i++){
        cin>>arr[i]; 
    }
    subSet(0,arr,a,store);
    return 0;
}