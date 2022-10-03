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
    int a,b;
    cin>>a>>b;
    int arr[a][b];
    vector<int>ans;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    int top=0;
    int down=a-1;
    int left=0;
    int dir=0;
    int right=a-1;
    while(top<=down && left<=right){
        if(dir==0){
            for(int i=top;i<=down;i++){
                ans.push_back(arr[i][left]);

            }
            left++;
        }
        else if(dir==1){
            for(int i=left;i<=right;i++){
                ans.push_back(arr[down][i]);
            }
            down--;

        }
        else if(dir==2){
            for(int i=down;i>=top;i--){
                ans.push_back(arr[i][right]);
            }
            right--;


        }
        else if(dir==3){
            for(int i=right;i>=left;i--){
                ans.push_back(arr[top][i]);
            }
            top++;
        }
        dir=(dir+1)%4;

    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }



    return 0;
}