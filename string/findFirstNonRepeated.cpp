#include <iostream>
using namespace std;
const int MAX_CHAR=26;
int main(){
    string s;
    cin>>s;
   
    char ch;
    int count[MAX_CHAR]={0};
    for(int i=0;i<s.length();i++){
        count[s[i]-'a']++;

        for(int j=0;j<MAX_CHAR;j++){
            if(count[j]==1){
                ch=j+'a';
                break;
                
            }
        }
    }
    cout<<ch;
    return 0;
}