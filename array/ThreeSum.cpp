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
   int b;
    int target;
    int a;
    cin>>a>>target;

    int sum;

    
    
    vector<int>arr;
    vector<int>count;
    for(int i=0;i<a;i++ ){
    cin>>b;
    arr.push_back(b);

       
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<a;i++){
        int l=i+1;
        int r=a-1;
       
        while(l<r){
            sum=arr[i]+arr[l]+arr[r];
            if(sum<target){
                l++;
            }
            if(sum>target){
                r--;
            }
            if (sum==target){
                count.push_back(l);
                count.push_back(r);
                count.push_back(i);
                break;
            }
           

        }




    }
    for(int i =0 ;i<count.size();i++){
        cout<< arr[count[i]]<<" ";
    }
 




    return 0;
}