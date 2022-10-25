#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void findCombination(int ind, int arr[], vector<int> &store, int target,int n){
    if(target==0){
        for(auto it : store){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=ind;i<n;i++){
        if(i>ind && arr[i]==arr[i-1])continue;
        if(arr[i]>target) break;
        store.push_back(arr[i]);
        findCombination(i+1,arr,store,target-arr[i],n);
        store.pop_back();
    }

}
int main(){
   int a,target;
   cin>>a;
   cin>>target;
   int arr[a];
   vector<int>store;
   for(int i=0;i<a;i++){
    cin>>arr[i];
   }
   sort(arr,arr+a);
   findCombination(0,arr,store,target,a);

    return 0;
}