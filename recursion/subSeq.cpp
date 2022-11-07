#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void subseq(int i,int arr[],int n,vector<int> &ds,int sum){
    if(i>=n){
        for(int i=0;i<ds.size();i++){
           sum+=ds[i];
        }
        cout<<sum<<" ";
       
        return;
    }
    ds.push_back(arr[i]);
    subseq(i+1,arr,n,ds,sum);
    ds.pop_back();
    subseq(i+1,arr,n,ds,sum);



}
int main(){
    int a;
    cin>>a;
    int arr[a];
    int sum=0;
    vector<int>ds;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    subseq(0,arr,a,ds,sum);
    return 0;
} 