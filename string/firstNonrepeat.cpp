#include <iostream>
using namespace std;
#include <map>
#include<cstring>
#include <algorithm>
#include <queue>
const int MAX_CHAR=26;
int main(){
string s;
cin>>s;
queue<char>q;
string ans="";
int count[MAX_CHAR]={0};
for(int i=0;i<s.length();i++){
  q.push(s[i]);
  count[s[i]-'a']++;
  while(q.size()!=0 && count[q.front()-'a']!=1){
    q.pop();
  }
  if(q.size()!=0){
    ans.push_back(q.front());
  }
  else{
    ans.push_back('#');
  }
}
cout<<ans;



    return 0;
}