#include <iostream>
using namespace std;
int main(){
    string s="I got intern at geeksforgeeks";
    int len=s.length();
    for(int i=0;i<len;i++ ){
        if(i==0 && isupper(s[i])){
           s[i]=s[i]+32;
        }
        else if(s[i-1]==' ' && isupper(s[i])){
            s[i]=s[i]+32;
        }
        else if(s[i-1]!=' ' && i!=0 && islower(s[i])){
          s[i]=s[i]-32;
    }
    }
    cout<<s;


    return 0;

}