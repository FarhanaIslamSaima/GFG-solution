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
bool clockWise(string s1,string s2){

for(int i=0;i<s1.length();i++){
    int n=s1.length();
    if(s1[i]!=s2[(i+2)%n]){
        return false;
    }
}
return true;




}

bool anticlockWise(string s1,string s2){

int len=s1.length();
for(int i=0;i<s1.length();i++){
    if(s1[(i+2)%len]!=s2[i]){
    return false;
}

}

return true;


}
int main(){
   string s1,s2;
 cin>>s1>>s2;

if(clockWise(s1,s2)){
    cout<<"True";
}
if(anticlockWise(s1,s2)){
    cout<<"True";
}

    return 0;
}