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
    string s;
    cin>>s;
    int countUpper=0;
    int countLower=0;
    int countDigit=0;
    int specialCount=0;
    for(char ch:s){
        if(isupper(ch)){
            countUpper++;
        }
        else if(islower(ch)){
            countLower++;
        }
        else if(isdigit(ch)){
            countDigit++;
        }
        else{
            specialCount++;

        }
    }
  cout<<"Upper case letter:"<< countUpper<<endl;
   cout<<"Lower case letter:"<< countLower<<endl;
   cout<<"Numbers:"<< countDigit<<endl;
   cout<<"special character: "<< specialCount<<endl;

    return 0;
}