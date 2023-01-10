#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int k=0;
    for(int i=1;i<=9;i++){
      
      i<6?k++:k--;
      int x=1;
        for(int j=1;j<=5;j++){
            if(j>=6-k){
                cout<<x++;
            }
            else{
                cout<<" ";
                
            }

        }
        cout<<endl;
    }
    return 0;
}
