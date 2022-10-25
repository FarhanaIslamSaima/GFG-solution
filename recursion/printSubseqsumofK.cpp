#include <iostream>
#include <vector>
using namespace std;
bool printSum(int i ,vector<int> &store,int s,int arr[],int n,int sum){
    
    if(i==n){
        if(s==sum){
                 for(auto it: store){
            cout<<it<<" ";
                 }
             cout<<endl;
             return true;
         
                

      
          

        
   
          
   

        }
       
       
       else return false;
    }
   
    store.push_back(arr[i]);
    s+=arr[i];
   if( printSum(i+1,store,s,arr,n,sum)==true){
    return true;
   };
    store.pop_back();
    s-=arr[i];
   if(printSum(i+1,store,s,arr,n,sum)==true) return true ;
   return false;
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
    printSum(0,store,0,arr,a,sum);
    return 0;

}