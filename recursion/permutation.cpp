#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void permutation(vector<int>&arr, int a ,int freq[],vector<int>&store){
    if(store.size()==arr.size()){
        for( auto it: store){
            cout<<it<<" ";
        }
        cout<<endl;
        return ;

    }
    for(int i=0;i<a;i++){
        if(!freq[i]){
            store.push_back(arr[i]);
            freq[i]=1;
            permutation(arr,a,freq,store);
            freq[i]=0;
            store.pop_back();
        }
    }

}
int main(){
    int a;
    int num;
    cin>>a;
   vector<int>arr;
    int freq[a]={0};
    vector<int>store;
    for(int i=0;i<a;i++){
      cin>>num;
      arr.push_back(num);
    }
    permutation(arr,a,freq,store);
    return 0;
}