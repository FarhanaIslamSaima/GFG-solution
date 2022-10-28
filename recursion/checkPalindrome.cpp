#include <iostream>
#include <vector>
using namespace std;



bool palindrome(int i, string s){


if(s[i]!=s[s.length()-1-i]){
    return false;
}
palindrome(i+1,s);
return true;


}
int main(){
    string s;
    cin>>s;
    cout << palindrome(0,s);
    return 0;
}