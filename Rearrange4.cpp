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




int j=0;
for(int i=0;i<a;i++){
    if(arr[i]!=0){
        arr[j++]=arr[i];
    }

}
for(;j<a;j++){
    arr[j]=0;
}
  





   
   for(int i=0;i<a;i++){
    cout<<arr[i]<<" ";
   }



    return 0;

}