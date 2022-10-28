#include <iostream>
#include <vector>
using namespace std;

void possible(int ind, string s, vector<char> store,int k){
    if(store.size()==k){
        for(auto it : store){
            cout<<it;
        }
     cout<<endl;
        
        return;
    }
    for(int i=ind; i<s.length();i++){
        store.push_back(s[i]);
        possible(0,s, store,k);
        store.pop_back();

    }

}
int main(){
    string s;
   
  vector<char>store;
    cin>>s;
     int k;
    cin>>k;
    possible(0, s, store,k);
    return 0;
}