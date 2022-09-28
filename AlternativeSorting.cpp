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


int a,b;
cin>>a;
vector<int>arr;
vector<int>store;
int me=a+1;
int max=a-1;
int min=0;
for(int i=0;i<a;i++){
    cin>>b;
    arr.push_back(b);
}
sort(arr.begin(),arr.end());

for(int i=0;i<a;i++){
    if(i%2==0){
        arr[i]=arr[i]+((arr[max])%me)*me;
    
        max--;

    }
    else{
         arr[i]=arr[i]+(arr[min]%me)*me;
     
        min++;

    }
}

for(int i=0;i<a;i++){
    cout<<arr[i]/me<<" ";
}


//dividend=quotient*devisor+reminder
//dividend/divisor=quotient
//dividend%devisor=reminder


















return 0;
}