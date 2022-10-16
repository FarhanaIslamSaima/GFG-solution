#include <bits/stdc++.h>
using namespace std;
const int MAX_CHAR=26;
int main(){
string s;
cin>>s;
int maxCount=0;

int count[MAX_CHAR]={0};
   int i = 0;

   
    for (; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
          i++;
            break;
        }
          
       
        
    }
   
for( ;i<s.length();i++){
    if(isupper(s[i])){
           int currCount=0;
        for(int j=0;j<MAX_CHAR;j++ ){
         
            if(count[j]>0){
                currCount++;

            }
        }
        maxCount=max(maxCount,currCount);
        memset(count,0,sizeof(count));

    }
    if(islower(s[i])){
        count[s[i]-'a']++;
    }
}
cout<<maxCount;

return 0;
}