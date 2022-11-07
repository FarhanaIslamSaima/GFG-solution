#include <iostream>
#include <vector>
using namespace std;


int sum( int arr[], int a,int MAX){


int prev=arr[0];
int prev2=0;

for(int i=1;i<a;i++){

    int take=arr[i];
    if(i>1){
        take+=prev2;
    }
    int notTake=0+prev;
    int currI=max(take,notTake);
    prev2=prev;
    prev=currI;
   
}
return prev;
}
int main(){
    int a;
    cin>>a;
    int arr[a];
    int total=0;
    int MAX=0;
    for(int i=0;i<a;i++){
        cin>>arr[i];

    }
    cout<<sum(arr,a,MAX);
    return 0;
}