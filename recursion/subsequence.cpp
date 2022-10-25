#include <iostream>
#include <vector>
using namespace std;
void printSubseq(int i,vector<int> &store, int arr[],int n){
    if(i>=n){
        for(auto it : store){
            cout<<it<<" ";
        }
    }
    store.push_back(arr[i]);
    printSubseq(i+1,store,arr,n);
    store.pop_back();
     printSubseq(i+1,store,arr,n);


}
int main(){
    int a;
    cin>>a;
    int arr[a];
    vector<int>store;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    printSubseq(0,store,arr,a);
    return 0;
}