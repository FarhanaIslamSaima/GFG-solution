#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
bool isSafe(int row,int col,vector<string>&board,int n){
    int dupRow=row;
    int dupCol=col;
    while(row>=0 && col>=0){
        if(board[row][col]=='Q') return false;
        row--;
        col--;
    }
    col=dupCol;
    row=dupRow;
        while(col>=0){
        if(board[row][col]=='Q') return false;
       
        col--;
    }
        col=dupCol;
    row=dupRow;
        while(row<n && col>=0){
        if(board[row][col]=='Q') return false;
        row++;
        col--;
    }
    
return true;

}
void solve(int col,vector<string>&board,int n){
    if(col==n){
    for(auto it : board){
        cout<<it<<endl;
    }
    cout<<endl;

    return;
    }
    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            solve(col+1,board,n);
            board[row][col]='.';
        }
    }

}
int main(){
int n;
cin >>n;
string s(n,'.');
vector<string>board(n);
for(int i=0;i<n;i++){
    board[i]=s;


}
solve(0,board,n);
    return 0;
}
//This is the best thing I've learnt so far