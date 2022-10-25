#include <iostream>
#include <vector>
using namespace std;
void findCombination(int i,int target,int arr[], vector<int> &ds,int n ,vector<vector<int>> &ans){
    if(i==n){

        if(target==0){
         for(auto it : ds){
            cout<<it<<" ";
         }
         cout<<endl;

        }
        return ;
    }

    if(arr[i]<=target){
        ds.push_back(arr[i]);
        findCombination(i,target-arr[i],arr,ds,n,ans);
        ds.pop_back();
    }
    findCombination(i+1,target,arr,ds,n,ans);



}
int main(){
    int a,target;
    cin>>a;
    cin>>target;
    vector<int>ds;
    vector<vector<int>>ans;
    int arr[a];
    for(int i=0;i<a;i++ ){
        cin>>arr[i];
    }
    findCombination(0,target,arr,ds,a,ans);
    
 
    return 0;
}