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
    int a;
    cin>>a;
    bool flag=false;
    int num1[a];
    string s1;
    cin>>s1;

    for(int i=0;i<a;i++){
        cin>>num1[i];
    }
 
 
        for(int i=0;i<a-1;i++){

          int max=std::max(max,num1[i]);
          if(s1[i]=='0' && max>i+1){
           flag=true;
            break;
          } 

         
      
    

       }
     
     if(flag){
      cout<<"A can not be sorted";
     }
     else{
      cout<<"A can be sorted";
     }


         

      


     
       
          
     

      
       
   
      
       
  
    
    








    return 0;

}