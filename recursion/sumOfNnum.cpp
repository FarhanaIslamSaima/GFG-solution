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
int add(int n);
int main(){
    int n;
    cin>>n;
   
    cout<<"Sum is= "<<add(n);

return 0;
}
int add(int n){
    if(n!=0)
       return n+add(n-1);

       return 0;

}