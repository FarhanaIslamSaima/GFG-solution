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
void reverseList(Node** head_ref)
{
    Node *current=*head_ref;
    Node *prev=NULL;
    Node *next=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;

    }
    *head_ref=prev;
    

  
 
 



 
  
   

}
int main(){
       Node* head=NULL;
    push(&head, 10);
     push(&head, 30);
      push(&head, 11);
       push(&head, 21);
       push(&head, 14);
 printList(head);
 puts("After reverse: "); 
       
      reverseList(&head);
       printList(head);
     
    return 0;
}