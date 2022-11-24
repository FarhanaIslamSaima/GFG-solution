#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int f(int ind,int buy,int a, int arr[]){
    if(ind==a){
        return 0;
    }

int profit=0;
if(buy==1){
    profit=max(-arr[ind]+f(ind+1,0,a,arr),0+f(ind+1,1,a,arr));


}
else{
    profit=max(arr[ind]+f(ind+1,1,a,arr),0+f(ind+1,0,a,arr));
}

return profit;

}
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];

    }
    cout<<f(0,1,a-1,arr);
    return 0;
}