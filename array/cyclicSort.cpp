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
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

int i=0;
while(i<a){
    int correct=arr[i];
    if(arr[i]!=arr[correct-1]){
        swap(arr[i],arr[correct-1]);
    }else{
        i++;
    }
}

for(int i=0;i<a;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
