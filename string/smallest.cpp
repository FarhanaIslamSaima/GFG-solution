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
    int N;
    cin>>N;
  if(N%9!=0){
    cout<<N%9;
  }
  for(int i=1;i<=(N/9);i++){
    cout<<"9";
  }
  for(int i=0;i<=N;i++){
    cout<<"0";
  }


    return 0;
}