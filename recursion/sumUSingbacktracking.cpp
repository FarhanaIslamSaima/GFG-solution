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
void sum(int i,int sumTotal){
    if(i<1){
        cout<<sumTotal;
        return;
    }
    sum(i-1,sumTotal+i);
    


}
int main(){
    int n;
    cin>>n;
    sum(n,0);
    return 0;
}