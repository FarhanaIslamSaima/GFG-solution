#include <iostream>
#include <vector>
using namespace std;
bool check(){

}

void possible(int ind,string s,int sum,int target,string operator,vector<string>store){
    if(sum==target){
       for(auto it: store){
        cout<<it;
       }
       cout<<endl;
       return;

    }

    for(int i=ind;i<s.length()-1;i++){
        store.push_back(s.substr(0,i));
        store.push_back(operator[i]);
        store.push(s.substr(i+1,s.size()-1));
        if(check(store)){
            return store;
        }

    }
    

}
int main(){
    string s;
    int target;
  string store=" ";
    string operator='+-*';
    cin>>target;
    cin>>s;
    int sum=0;
    possible(0,s,sum,target,operator,store);
    return 0;
}