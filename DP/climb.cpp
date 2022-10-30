#include <iostream>
#include <vector>
using namespace std;
int climb(int index){
    if(index==0) return 0;

    if(index==1) return 1;
      if(index==2) return 2;


    return climb(index-1)+climb(index-2);
   









  

}
int main(){
    int index;
    cin>>index;

  

    cout<<climb(index);
    return 0;
}