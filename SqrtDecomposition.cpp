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
    vector<int>arr(a);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int len=sqrtl(a)+1;
    vector<int>b(len);

    for(int i=0;i<a;i++){
        b[i/len]+=arr[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
     
        int sum=0;
        for(int i=l;i<=r;){
            if(i%len==0 && i+len-1<=r){
                sum+=b[i/len];
                i+=len;
            }
            else{
                sum+=arr[i];
                i++;

            }
        }
            cout<<sum<<endl;

    }







    return 0;
}