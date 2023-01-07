#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
        if(i-j>0){
            cout<<" ";
        }
        else{
            cout<<"*";
        }
            
            
        }
        cout<<endl;

    }
    return 0;
}