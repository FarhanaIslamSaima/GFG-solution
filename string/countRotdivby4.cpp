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
int countRot(string n){
    int len=n.length();

    if(len==1){
        int ondeDigit=n.at(0)-'0';
        if(ondeDigit%4==0){
            return 1;
        }
        return 0;
    }
    int twodigit,count=0;
    for(int i=0;i<n.length()-1;i++){
        twodigit=(n.at(i)-'0')*10+(n.at(i+1)-'0');
        if(twodigit%4==0){
            count++;
        }
    }

    twodigit=(n.at(len-1)-'0')*10+n.at(0)-'0';
    if(twodigit%4==0){
        count++;
    }
    return count;



}
int main(){

    string n;
  cin>>n;

  cout<<countRot(n);
    return 0;
}