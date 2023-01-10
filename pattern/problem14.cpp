#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int k;
    for(int i=1;i<=7;i++){
         k=7-i;
        for(int j=1;j<=7;j++){
            if(j<=8-i){
                cout<<k--;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}