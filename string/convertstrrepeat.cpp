#include <iostream>
using namespace std;
#include <unordered_map>

bool checkStr(string str, int k){
       int n = str.length();
    if (n%k != 0)
        return false;
 
    // Map to store strings of length k and their counts
    unordered_map<string, int> mp;
    for (int i=0; i<n; i+=k){
        mp[str.substr(i, k)]++;
    }
 
    // If string is already a repetition of k substrings,
    // return true.
    if (mp.size() == 1)
        return true;
 
    // If number of distinct substrings is not 2, then
    // not possible to replace a string.
    if (mp.size() != 2)
        return false;
 
    // One of the two distinct must appear exactly once.
    // Either the first entry appears once, or it appears
    // n/k-1 times to make other substring appear once.
    cout<<mp.begin()->second;
    if ((mp.begin()->second == (n/k - 1)) ||
                    mp.begin()->second == 1)
       return true;
 
    return false;
 


}
int main(){
    string s;
    int k;
    cin>>s;
    cin>>k;
   string res;
    if(checkStr(s,k)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }



    return 0;
}
// I couldn't do it alone.feeling fraustrated...