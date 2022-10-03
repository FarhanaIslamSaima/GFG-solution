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
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];

    }

    sort(arr,arr+a);
   cout<<arr[k-1];


    return 0;
}