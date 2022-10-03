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
    int len=sqrtl(a)+1;
    vector<int>b(len);
 

    b[0]=*min_element(arr+3,arr+6);
   


cout<<b[0];
     



    return 0;
}