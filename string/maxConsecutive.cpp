#include <iostream>
using namespace std;
#include <map>
#include<cstring>
#include <algorithm>
const int MAX_CHAR=26;
int main(){
    string s;
   int max=0;
    cin>>s;
    char maxChar;
    int count=1;
  int l=0;
  int r=1;
  while(l<s.length()&& r<s.length()){
 
    if(s[l]==s[r]){
        count++;
    }
    else{
        max=std::max(count,max);
        maxChar=s[l];
        count=1;
        l=r+1;

    }
    r++;
  }
  cout<<maxChar;

         
 

    return 0;
}