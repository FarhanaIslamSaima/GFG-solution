#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR=26;

bool check(int freq[],int k){
    for(int i=0;i<MAX_CHAR;i++){
        if(freq[i]&& freq[i]!=k){
            return false;
        }
    }
    return true;

}


int countFreq(string s,int k){
int res=0;
for(int i=0;i<s.length();i++){
    int freq[MAX_CHAR]={0};
    for(int j=i;j<s.length();j++){
        int index=s[j]-'a';
        freq[index]++;

        if(freq[index]>k){
            break;
        }
        else if(freq[index]==k && check(freq,k)==true){
            res++;
        }
     


    }

}
return res;
    

}

int main(){
    string s;
    int k;
    cin>>s;
    cin>>k;
    cout<<countFreq(s,k);


return 0;
}