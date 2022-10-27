#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void solve(int col, vector<string>&board,vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal,int n){
    if(col==n){
        for(auto it: board){
            cout<<it<<" ";
        }
        cout<<endl;
        return ;
    }
    for(int row=0;row<n;row++){
        if(leftRow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+col-row]==0){
            board[row][col]='Q';
            lowerDiagonal[row+col]=1;
            leftRow[row]=1;
            upperDiagonal[n-1+col-row]=1;
            solve(col+1,board,leftRow,upperDiagonal,lowerDiagonal,n);
            board[row][col]='.';
            lowerDiagonal[row+col]=0;
            leftRow[row]=0;
            upperDiagonal[n-1+col-row]=0;
        }

    }

}
int main(){
    int n;
    cin>>n;
  string s(n,'.');
    vector<string>board(n);
    for(int i=0;i<n;i++){
        board[i]=s;
    }
    vector<int>leftRow(n,0),upperDiagonal(2*n-1,0),lowerDiagonal(2*n-1,0);
    solve(0,board,leftRow,upperDiagonal,lowerDiagonal,n);


}
//this one is nice too