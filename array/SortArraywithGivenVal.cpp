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

    int a,num,x;
    cin>>a>>x;

int arr[a];
multimap<int, int> m;
    multimap<int, int>::iterator it;
 
 for(int i=0;i<a;i++){
cin>>arr[i];
 }

   for (int i = 0; i < a; i++){
        m.insert(make_pair(abs(x - arr[i]), arr[i]));
 
    // Update the values of array
    int j = 0;
    for (it = m.begin(); it != m.end(); it++)
        arr[j++] = (*it).second;
}
 
for(int i=0;i<a;i++){
    cout<<arr[i]<" ";
}



    return 0;
}