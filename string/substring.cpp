#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR=26;
int main(){
    string s;
    cin>>s;
int len=s.length();
float numOfsubstr=(len*(len+1))/2;
cout<<numOfsubstr;
return 0;
}