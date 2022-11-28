#include <bits/stdc++.h>

using namespace std;

int f(int ind, int a,int prev_ind, int arr[]){
    if(ind==a){
      return 0;
    }

 int len=0+f(ind+1,a,-1,arr);
if(prev_ind==-1|| arr[ind]<arr[ind+1]){
    len=(len,1+f(ind+1,a,ind,arr));
}

   
    

return len;


}
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cout<<f(0,a-1,-1,arr);

    return 0;
}