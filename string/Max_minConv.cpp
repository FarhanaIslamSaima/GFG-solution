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
int replaceDigit(int x ,int from ,int to){


    int result=0;
    int multiply=1;

    while(x>0){
            int reminder=(x%10);
        if(reminder==from){
            result=result+to*multiply;
        }
        else{
            result=result+reminder*multiply;
        }
            multiply*=10;
            x=x/10;
      


    }
    return result;

}


int main(){
    int x,y;
    cin>>x>>y;
   cout<<"Min sum is: "<< replaceDigit(x,6,5)+replaceDigit(y,6,5)<<endl;
    cout<<"Max sum is: "<< replaceDigit(x,5,6)+replaceDigit(y,5,6);
  


    return 0;
}