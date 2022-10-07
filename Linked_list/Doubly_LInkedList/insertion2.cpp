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
    cout<<"\n travere in forward dir \n";
    while(n!=NULL){
        cout<<n->data<<" ";
        last=n;
        n=n->next;
    }
    cout<<"\n travere in backward dir \n";
    while(last!=NULL){
        cout<<last->data<<" ";
        last=last->prev;

    }




}

void append(Node** head_ref,int new_data){
    Node *new_node=new Node();
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
        new_node->prev=last;

}
void push(Node** head_ref,int new_data){
    Node *new_node=new Node();
    new_node->data=new_data;
    new_node->next=*head_ref;
  
    new_node->prev=NULL;
    if((*head_ref)!=NULL){
        (*head_ref)->prev=new_node;
    }
      *head_ref=new_node;

}
void insertAfter(Node *prev_node,int new_data){
    Node *new_node=new Node();
    new_node->data=new_data;
    new_node->next=prev_node->next;
    new_node->prev=prev_node;
    prev_node->next=new_node;
    if(new_node->next!=NULL){
        new_node->next->prev=new_node;
    }

}
int main(){
    Node *head=NULL;
    append(&head,6);
    push(&head,7);
     push(&head,1);
       append(&head,4);
       insertAfter(head->next,8);
       printList(head);
  



    return 0;
}