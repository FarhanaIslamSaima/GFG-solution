#include <iostream>
using namespace std;
#include <map>
#include<cstring>
#include <algorithm>
const int MAX_CHAR=26;
int main(){
    string str;
   cin>>str;
int n=str.length();
    char res=str[0];
  int count=0;
  int currCount=1;
  for(int i=0;i<n;i++){
    if(i<n-1 && str[i]==str[i+1]){
        currCount++;
    }
    if(currCount>count){
        count=currCount;
        res=str[i];
    }
    currCount=1;
  }
  cout<<res;



         
 

    return 0;
}