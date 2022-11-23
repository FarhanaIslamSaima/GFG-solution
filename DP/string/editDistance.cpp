#include <bits/stdc++.h>

using namespace std;
int f(int ind1, int ind2, string &s1, string &s2){
    if(ind1<0){
        return ind2+1;
    }
    if(ind2<0){
        return ind1+1;
    }

    if(s1[ind1]==s2[ind2]){
        return 0+f(ind1-1,ind2-1,s1,s2);
    }
   return 1+min(f(ind1-1,ind2,s1,s2),min(f(ind1,ind2-1,s1,s2),f(ind1-1,ind2-1,s1,s2)));

}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int ind1=s1.length();
    int ind2=s2.length();
    cout<<f(ind1-1,ind2-1,s1,s2);
    return 0;
}