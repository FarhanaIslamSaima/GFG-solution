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
string temp=s1;
string res;
for(int i=0;i<s1.length();i++){
s1=temp;
reverse(s1.begin(),s1.begin()+i);
reverse(s1.begin()+i,s1.end());
reverse(s1.begin(),s1.end());
if(s1==s2){
res="True";
break;

}
else{
res="False";
}



}
cout<<res;


    return 0;
}