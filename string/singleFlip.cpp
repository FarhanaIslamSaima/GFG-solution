#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int countOne=0;
    int countZero=0;
    for(int i=0;i<s.length();i++){
    if(s[i]=='1'){
        countOne++;
    }
    else if(s[i]=='0'){
        countZero++;
    }
    }

    if(countOne==1 || countZero==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}