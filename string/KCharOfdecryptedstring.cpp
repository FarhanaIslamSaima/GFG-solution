
// C++ program to find K'th character in
// decrypted string
#include<bits/stdc++.h>
using namespace std;
  

  

int main()
{
  string s;
  int k;
  cin>>s;
  cin>>k;
  string expand="";
  string temp;
  int freq;
  for(int i=0;s[i]!='\0';){
    temp="";
    freq=0;

    while(s[i]>='a' && s[i]<='z'){
        temp.push_back(s[i]);
        i++;
    }

    while(s[i]>='1' && s[i]<='9'){
        freq=freq*10+s[i]-'0';
        i++;
    }
    for(int j=1;j<=freq;j++){
       
        expand.append(temp);
    }
      
  }
    if (freq==0)
        expand.append(temp);

  
    
        cout<<expand[k-1]<<" ";
    return 0;
}