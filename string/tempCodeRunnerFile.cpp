#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,k;
    cin>>a>>k;
    int arr[a];
    unordered_map<int,int>mp;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        mp[arr[i]]=i;
        if(mp.find(k)!=mp.end()){
            cout<<mp[k];
            break;
        }
        else{
            cout<<k-1;
            break;
        }
     
    }
 
    return 0;
}