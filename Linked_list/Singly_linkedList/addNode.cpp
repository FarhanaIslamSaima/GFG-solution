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
 struct Node
 {
  int data;
  Node* next;
 };


void printList(Node* n){
    while(n !=NULL){
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
void append(Node** head_ref,int new_data){
    Node* new_node=new Node();
    Node *last=*head_ref;
    new_node->data=new_data;
    new_node->next=NULL;

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
void insert_after(Node* prev_node,int new_data){
       if (prev_node == NULL)
    {
        cout<<"The given previous node cannot be NULL";
        return;
    }
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;



}


int main(){
  Node* head=NULL;
  append(&head,6);
 
  push(&head,7);
  push(&head,1);
  append(&head,4);
  insert_after(head->next,8);

  printList(head);


 
    return 0;
}