#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    string to="";
    string temp="";
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            to+=' ';
            to+=tolower(s[i]);
          
           
        
        }
        if(islower(s[i])){
            to+=s[i];
            temp+=to;
             to="";
        }
      
    }
    cout<<temp;


    return 0;
}