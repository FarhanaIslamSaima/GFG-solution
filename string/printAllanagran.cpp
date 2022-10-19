#include <bits/stdc++.h>
#define MAX 26
using namespace std;

unordered_map<string,vector<string>>mymap;

int main(){
    string temp;
    string arr[]={"geeksquiz", "geeksforgeeks", "abcd",
                 "forgeeksgeeks", "zuiqkeegs"};
                 int n=sizeof(arr)/sizeof(arr[0]);
              
             for(int i=0;i<n;i++){
                temp=arr[i];
                sort(arr[i].begin(),arr[i].end());
                mymap[arr[i]].push_back(temp);

             }
                 vector<vector<string>>result;
                 for(auto itr=mymap.begin();itr!=mymap.end();++itr){
                   result.push_back(itr->second);
                 }
                 cout<<result[2][0];
            


    return 0;
}