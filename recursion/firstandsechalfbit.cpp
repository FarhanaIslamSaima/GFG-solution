#include <iostream>
#include <vector>
using namespace std;

bool check(vector<char>store){
    int sum1=0;
    int sum2=0;
    int l=0;
    int r=store.size()-1;
    while(l<r){
       sum1+=store[l++]-'0';
       sum2+=store[r--]-'0';
    }
    if(sum1==sum2){
        return true;
    }
    return false;


}

void sum(int ind,int num, vector<char>&store,string str){
    if(store.size()==num*2){
     

     if(check(store)){
        for(auto it : store){
            cout<<it;
        }
     }
        cout<<" ";
        return;
    }
    for(int i=0;i<str.size();i++){
        store.push_back(str[i]);
        sum(0,num,store,str);
        store.pop_back();

    }

}
int main(){
    int num;
    string str;
    cin>>str;

    vector<char>store;
    cin>>num;
    sum(0,num,store,str);
    return 0;
}