#include<bits/stdc++.h>
using namespace std;
int findSum(string str)
{
string temp="";
int sum=0;
for(char ch: str){
    if(isdigit(ch)){
        temp+=ch;
    }
    else{
        sum+=atoi(temp.c_str());
        temp=" ";
    }
}

return sum+atoi(temp.c_str());
}
int main()
{
    // input alphanumeric string
  string str = "12abc20yz68abc";
 
    // Function call
      cout<<  findSum(str);
 
    return 0;
}