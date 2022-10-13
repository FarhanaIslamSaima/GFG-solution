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
      string temp=s;
 for(int i=1;i<s.length();i++){
            s=temp;
        reverse(s.begin(),s.begin()+i);
        reverse(s.begin()+i,s.end());
        reverse(s.begin(),s.end());
        cout<<s<<endl;

    }
    return 0;
}