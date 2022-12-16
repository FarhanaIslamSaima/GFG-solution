#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int MAH(vector<int>v){
    stack<pair<int,int>>S;
 
    vector<int>width;
      vector<int>left;
        vector<int>right;
        vector<int>area;
      
  
    for(int i=0;i<v.size();i++){
       
       
         if(S.size()==0){
            left.push_back(-1);
            
         }
         else if(S.size()>0 && S.top().first<v[i]){
            left.push_back(S.top().second);
         }
         else if(S.size()>0 && S.top().first>=v[i]){
        
            while(S.size()>0 &&S.top().first>=v[i]){
                S.pop();
            }
             if(S.size()==0){
                left.push_back(-1);
            }
            else{
                left.push_back(S.top().second);
            }
         }
         S.push({v[i],i});
    }
   while(S.size()!=0){
    S.pop(); 
   }

        for(int i=v.size()-1;i>=0;i--){
         if(S.size()==0){
            right.push_back(v.size());
            
         }
         else if(S.size()>0 && S.top().first<v[i]){
            right.push_back(S.top().second);
         }
         else if(S.size()>0 && S.top().first>=v[i]){
            while(S.size()>0 &&  S.top().first>=v[i]){
                S.pop();
            }
             if(S.size()==0){
                right.push_back(v.size());
            }
            else{
                right.push_back(S.top().second);
            }
         }
         S.push({v[i],i});
    }
    reverse(right.begin(),right.end());
int Max=0;
    for(int i=0;i<v.size();i++){
   
    width.push_back(right[i]-left[i]-1);
    

    area.push_back(v[i]*width[i]);
 
    Max=max(area[i],Max);
     
        
        

    }

    return Max;
}


int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<int>v;
    int Max=0;
    for(int j=0;j<m;j++){
        v.push_back(arr[0][j]);
    

    }
      Max=MAH(v);
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                v[j]=0;
            }
            else{
               
                v[j]=v[j]+arr[i][j];
                 
            }
         
               
          
        }
       
        
         Max=max(Max,MAH(v));
     
        

    }
 
  
    cout<<Max;
    return 0;
}