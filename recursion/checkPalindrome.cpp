#include <iostream>
#include <vector>
using namespace std;
bool checkPalindrome(string s,int i){
    string res="";
    int len=s.length();

    if(s[i]!=s[len-i-1]){
      return false;ab
    }
 
    checkPalindrome(s,i+1);
    return true;

 

 




}
int main(){
    string s;
    cin>>s;
    if(checkPalindrome(s,0)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}