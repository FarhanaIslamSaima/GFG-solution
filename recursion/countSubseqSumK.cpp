#include <iostream>
#include <vector>
using namespace std;
int printSum(int i ,vector<int> &store,int s,int arr[],int n,int sum){
    
    if(i==n){
        if(s==sum){
                 for(auto it: store){
            cout<<it<<" ";
                 }
             cout<<endl;
             return 1;
         
                

      
          

        
   
          
   

        }
       
       
       else return 0;
    }
   
    store.push_back(arr[i]);
    s+=arr[i];
   int l= printSum(i+1,store,s,arr,n,sum);
    
    store.pop_back();
    s-=arr[i];
   int r=printSum(i+1,store,s,arr,n,sum);
   return l+r;
}
int main(){
    int a;
    cin>>a;
    int arr[a];
    int sum=2;
    
    vector<int>store;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
   cout<< printSum(0,store,0,arr,a,sum);
    return 0;

}