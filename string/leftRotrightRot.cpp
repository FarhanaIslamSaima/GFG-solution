#include<bits/stdc++.h>
using namespace std;


  int main(){
    string s;
    int d;
    cin>>s;
    cin>>d;
reverse(s.begin(),s.begin()+d);
reverse(s.begin()+d,s.end());
reverse(s.begin(),s.end());
cout<<s;



    return 0;
  }