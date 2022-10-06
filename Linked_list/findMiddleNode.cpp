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
    Node* next;
};
void printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
void push(Node** head_ref,int new_data){
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;

}
void findMiddleNode(Node** head_ref)
{
    Node *temp=*head_ref;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;

    }
    temp=*head_ref;
    for(int i=0;i<len/2;i++){
        temp=temp->next;
    }
    cout<<temp->data;

  
   

}
int main(){
       Node* head=NULL;
 
     push(&head, 5);
      push(&head, 4);
   
       
        
    
       findMiddleNode(&head);
  
       
  
    return 0;
}