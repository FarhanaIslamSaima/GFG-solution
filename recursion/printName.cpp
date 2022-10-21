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
void printName(int i,int n){
    
 
 if (i>n){
    return;
 }
 cout<<"Saima"<<endl;
 printName(i+1,n);
    
}
int main(){
    int n;
    cin>>n;
   
    
    printName(1,n);

    return 0;
}
