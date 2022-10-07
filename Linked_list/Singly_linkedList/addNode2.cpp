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
    void append(Node** head_ref,int new_data){
   Node* new_node=new Node();
  new_node->data=new_data;
  new_node->next=NULL;
  Node *last=*head_ref;
  if(*head_ref==NULL){
    *head_ref=new_node;
    return;
  }
  while(last->next!=NULL){
    last=last->next;
  
  }
  last->next=new_node;
  return;

    }

    void push(Node** head_ref,int new_data){
        Node* new_node=new Node();
        new_node->data=new_data;
        new_node->next=(*head_ref);
        (*head_ref)=new_node;


    }
    void insertAfter(Node* prev_node,int new_data){
        Node* new_node=new Node();
        new_node->data=new_data;
        new_node->next=prev_node->next;
        prev_node->next=new_node;


    }
  
int main(){
    Node* head =NULL;
  append(&head,6);
 
  push(&head,7);
  push(&head,1);
  append(&head,4);
  insertAfter(head->next,8);

    

    printList(head);


    return 0;
}