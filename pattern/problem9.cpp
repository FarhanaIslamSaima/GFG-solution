#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    for(int i=0;i<=4;i++){
        char k='A';
        for(int j=1;j<=7;j++){
          if(j>=5-i && j<=3+i){
            cout<<" ";
            if(j==4){
            k--;
                
            }

          }
          else{
            cout<<k;
            j<4?k++:k--;
            
          }
          
            
        }
        cout<<endl;
    }
    return 0;
}