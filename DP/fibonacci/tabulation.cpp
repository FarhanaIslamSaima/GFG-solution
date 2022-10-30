#include <iostream>
#include <vector>
using namespace std;



int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    int prev2=0;
    int prev=1;
    int currI=0;
    for(int i=2;i<=n;i++){
       currI=prev2+prev;
       prev2=prev;
       prev=currI;
    }
    cout<<prev;

    return 0;
}