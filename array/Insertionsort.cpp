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


    for(int i=0;i<a;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }




    return 0;
}