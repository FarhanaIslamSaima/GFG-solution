
// C++ program for unusual string sorting
#include <bits/stdc++.h>
using namespace std;
#define MAX 26
 
// Function for alternate sorting of string
void alternateSorting(string& s){
    int n=s.length();
    int uCount[MAX]={0};
    int lCount[MAX]={0};
    for(int i=0;i<n;i++){
        if(isupper(s[i])){
            uCount[s[i]-'A']++;

        }
        else{
            lCount[s[i]-'a']++;
        }
        
    }


    int i=0;int j=0;int k=0;
    while(k<n){
         while(i<MAX && uCount[i]==0){
            i++;
        }
        if(i<MAX){
            s[k++]='A'+i;
            uCount[i]--;
            
        }
        
        while(j<MAX && lCount[j]==0){
            j++;
        }
        if(j<MAX){
            s[k++]='a'+j;
            lCount[j]--;
        }
    


    }
      
    

}
int main(){
    string s;
    cin>>s;
    alternateSorting(s);
    cout<<s;
}