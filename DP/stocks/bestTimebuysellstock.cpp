#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int f(int a, int arr[]){

    int stock=0;
int MIN=arr[0];

    for(int i=1;i<a;i++){
      
        int price=arr[i]-MIN;

        stock=max(stock,price);
        MIN=min(MIN,arr[i]);
     
    
    }
    return stock;

}
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cout<<f(a,arr);
    return 0;
}
