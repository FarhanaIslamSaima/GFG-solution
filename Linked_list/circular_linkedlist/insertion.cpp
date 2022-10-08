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
struct Node{
    int data;
    struct Node* next;
};

struct Node* addToEmpty(struct Node* last,int data){
    if(last!=NULL){
        return last;
    }
 struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
 temp->data=data;
 last=temp;
last->next=last;
return last;

    

}
struct Node* addBegin(struct Node* last,int data){
    if(last==NULL){
        return addToEmpty(last,data);
    }
  struct Node* temp=(struct Node*)malloc(sizeof(struct Node));

  temp->data=data;

  temp->next=last->next;
  last->next=temp;
   
  return last;


}

struct Node* addEnd(struct Node* last,int data){
    if(last==NULL){
        return addToEmpty(last,data);
    }
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=last->next;
    last->next=temp;
    last=temp;
  
    return last;

}

void traverse(struct Node* last){
    struct Node* p;
    if(last==NULL){
        cout<<"List is empty";
    }
    p=last->next;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=last->next);

}
int main(){
    struct Node* last=NULL;
    last=addToEmpty(last,6);
      last = addBegin(last, 4);
         last = addBegin(last, 3);
          last = addEnd(last, 8);
    
        traverse(last);
     
 
    return 0;
}