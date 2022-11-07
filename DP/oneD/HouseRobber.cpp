#include <iostream>
#include <vector>
using namespace std;

int Rob(vector<int>&arr){
    int prev=arr[0];
    int prev2=0;
    int a=arr.size();

    for(int i=1;i<a;i++){
        int take=arr[i];
        if(i>1){
            take+=prev2;
        }
        int notTake=0+prev;
        int currI=max(take,notTake);
        prev2=prev;
        prev=currI;
    }
    return prev;
}

int main(){
    int a;
    cin>>a;
    int arr[a];
    vector<int>store1;
    vector<int>store2;
    for(int i=0;i<a;i++){
        cin>>arr[i];
       if(i!=0){
        store1.push_back(arr[i]);
       }
       if(i!=a-1){
        store2.push_back(arr[i]);
       }
    }

    int max=std::max(Rob(store1),Rob(store2));
    cout<<max;
    

    return 0;
}