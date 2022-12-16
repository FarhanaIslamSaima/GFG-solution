#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    stack<pair<int,int>>S;
 
    vector<int>width;
      vector<int>left;
        vector<int>right;
        vector<int>area;
        
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<a;i++){
         if(S.size()==0){
            left.push_back(-1);
            
         }
         else if(S.size()>0 && S.top().first<arr[i]){
            left.push_back(S.top().second);
         }
         else if(S.size()>0 && S.top().first>=arr[i]){
        
            while(S.size()>0 &&S.top().first>=arr[i]){
                S.pop();
            }
             if(S.size()==0){
                left.push_back(-1);
            }
            else{
                left.push_back(S.top().second);
            }
         }
         S.push({arr[i],i});
    }
   while(S.size()!=0){
    S.pop(); 
   }

        for(int i=a-1;i>=0;i--){
         if(S.size()==0){
            right.push_back(7);
            
         }
         else if(S.size()>0 && S.top().first<arr[i]){
            right.push_back(S.top().second);
         }
         else if(S.size()>0 && S.top().first>=arr[i]){
            while(S.size()>0 &&  S.top().first>=arr[i]){
                S.pop();
            }
             if(S.size()==0){
                right.push_back(7);
            }
            else{
                right.push_back(S.top().second);
            }
         }
         S.push({arr[i],i});
    }
    reverse(right.begin(),right.end());
int Max=0;
    for(int i=0;i<a;i++){
   
    width.push_back(right[i]-left[i]-1);

    area.push_back(arr[i]*arr[i]);
    Max=max(area[i],Max);
     
        
        

    }
    cout<<Max;


    return 0;
}