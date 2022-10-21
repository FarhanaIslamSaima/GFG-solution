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
void printBack(int i,int count){
    if(i>count){
        return;
    }
 
    printBack(i+1,count);
    cout<<i<<endl;

}
int main(){
    int count;
    cin>>count;
    printBack(0,count);

    return 0;
}