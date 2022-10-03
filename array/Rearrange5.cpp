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
    int a,k;
    cin>>a>>k;
    int count=0;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
 
 






int l=0;
int r=a-1;
while(l<r){
    if(arr[l]>k){
        if(arr[r]<=k){
            swap(arr[l],arr[r]);
            count++;
        }
        else{
            r--;
        }
    }
    else{
        l++;
    }
}

cout<<count;
  






    return 0;
}