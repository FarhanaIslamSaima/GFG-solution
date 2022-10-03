#include <iostream>
#include <map>
#include<string.h>
#include <limits.h>
#include <vector>
#include <bits/stdc++.h>
#include<array> 
#include <unordered_map>
#include<cmath>

using namespace std;
int main(){
    int a;

    cin>>a;
        int arr[a];
    vector<int>store;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        
    }
    int i=0;
while(i<a){
int correct=arr[i];
    if(arr[i]!=-1 && arr[i]!=arr[correct]){
        swap(arr[i],arr[correct]);
    }
    else{
        i++;
    }

}

        for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
        
    }





    return 0;
}