
// C++ program to search all anagrams of a pattern in a text
#include <bits/stdc++.h>
#define MAX 256
using namespace std;
bool compare(char count2[],char count1[]){

    for(int i=0;i<MAX;i++){
 
        if(count2[i]!=count1[i]){
            return false;
        }
    }
    return true;
}
void search(char* txt,char* pattern){
    int M=strlen(txt);
    int N=strlen(pattern);
    char count1[MAX]={0};
    char count2[MAX]={0};
    for(int i=0;i<N;i++){
        count1[txt[i]]++;
        count2[pattern[i]]++;

    }
    for(int i= N;i<M;i++){
        if(compare(count2,count1)){
            cout<<"Found at : "<<i-N<<endl;


        }
        count1[txt[i]]++;
        count1[txt[i-N]]--;
    }
     if (compare(count2,count1))
        cout << "Found at " << (M - N) << endl;
}
 
int main(){
    char txt[]="BACDGABCDA";
    char pattern[]="ABCD";
    search(txt,pattern);
    return 0;
}