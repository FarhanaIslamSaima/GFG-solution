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
    string s1,s2;
cin>>s1>>s2;
int max,min;
for(int i=0; i<s1.length();i++){
    if(s1[i]=='6'){
        s1[i]='5';

    }
      if(s2[i]=='6'){
        s2[i]='5';

    }
   
}

min=stoi(s1)+stoi(s2);
cout<<"Min NUM: "<< min<<endl;
for(int i=0; i<s1.length();i++){
    if(s1[i]=='5'){
        s1[i]='6';

    }
      if(s2[i]=='5'){
        s2[i]='6';

    }
   
}
max=stoi(s1)+stoi(s2);
cout<<"Max NUM: "<< max;





    return 0;
}