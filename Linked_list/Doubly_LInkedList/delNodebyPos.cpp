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
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
};

void printList(Node *n){
    Node *last;
      cout<<"\n In forward dir\n";
    while(n!=NULL){
        cout<<n->data<<" ";
      
        last=n;
        
        n=n->next;
    }
          cout<<"\n In backward dir\n";
    while(last!=NULL){
              cout<<last->data<<" ";
        last=last->prev;
        
    }

}
void push(Node** head_ref,int new_data){
    Node *new_node=new Node();
    new_node->data=new_data;
    new_node->next=*head_ref;
    if((*head_ref)!=NULL){
        (*head_ref)->prev=new_node;
    }
    *head_ref=new_node;
}
void delNode(Node** head_ref,int index){
    Node *curr=*head_ref;
    int count=0;
    while(count<index && curr!=NULL){
      curr=curr->next;
      count++;
    }
     Node *temp=curr;
    if(curr->next!=NULL ){
  
    curr->next->prev=temp->prev;
    }
    if(curr->prev!=NULL){
          temp->prev->next=curr->next;
    }
    free(curr);
  


      
}
int main(){
    Node *head=NULL;
      push(&head,5);
    push(&head,2);
    push(&head,4);
    push(&head,8);
    push(&head,10);
    delNode(&head,2);
    printList(head);
  


    return 0;
}