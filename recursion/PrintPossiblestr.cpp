#include <iostream>
#include <vector>
using namespace std;

void possible(int ind, string s, vector<char> store){
    if(store.size()==3){
        for(auto it : store){
            cout<<it;
        }
     cout<<endl;
        
        return;
    }
    for(int i=ind; i<2;i++){
        store.push_back(s[i]);
        possible(0,s, store);
        store.pop_back();

    }

}
int main(){
    string s;
  vector<char>store;
    cin>>s;
    possible(0, s, store);
    return 0;
}