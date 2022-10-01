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
    int k=a/2;
int arr[a];
int temp[a];

    for(int i=0;i<a;i++){
     cin>>arr[i];
    }

    for(int i=0;i<a;i++){
        temp[i]=arr[i];
        
    }
   sort(temp,temp+a);
   int evenPos=a/2;
   int oddPos=a-a/2;   
  
int j=oddPos-1;
for(int i=0;i<a;i+=2){
    arr[i]=temp[j--];
}
 j=oddPos;

for(int i=1;i<a;i+=2){
    arr[i]=temp[j++];
}





for(int i=0;i<a;i++){
    cout<<arr[i]<<" ";

}

}