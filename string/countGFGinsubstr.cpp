#include <iostream>
#include <map>
#include<string.h>
#include <limits.h>
#include <vector>
#include <bits/stdc++.h>
#include<array> 
#include <unordered_map>
#include<cmath>


using namespace std;
int main(){
    string s;
    cin>>s;
    int cntG=0;
    int cntF=0;
    int result=0;
    int C=0;
    for(int i=0;i<s.length();i++){
        switch (s[i])
        {
        case 'G':
             cntG++;
             result+=C;
             break;

        case 'F':
            
            C+=cntG;
             break;
           
        
        default:
            continue;
        }

    }
    cout<<result;
    return 0;
}