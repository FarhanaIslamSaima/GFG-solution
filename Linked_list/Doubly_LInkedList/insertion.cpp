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
    Node* next;
    Node* prev;
};
void push(Node** head_ref,int new_data){
    Node *new_node=new Node();
    new_node->data=new_data;
    new_node->next=*head_ref;
    new_node->prev=NULL;
    if(*head_ref!=NULL){
        (*head_ref)->prev=new_node;
    }
    *head_ref=new_node;

}

void append(Node** head_ref,int new_data){
    Node *new_node=new Node();
    Node *last=*head_ref;
    new_node->data=new_data;
    new_node->next=NULL;
   if(*head_ref==NULL){
    new_node->prev=NULL;
    *head_ref=new_node;
    return;
   }
   while(last->next!=NULL){
    last=last->next;
   }

   last->next=new_node;
   new_node->prev=last;
   return;

}
void insertAfter(Node* prev_node, int new_data)
{
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL) {
        cout << "the given previous node cannot be NULL";
        return;
    }
 
    /* 2. allocate new node */
    Node* new_node = new Node();
 
    /* 3. put in the data */
    new_node->data = new_data;
 
    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;
 
    /* 5. Make the next of prev_node as new_node */
    prev_node->next = new_node;
 
    /* 6. Make prev_node as previous of new_node */
    new_node->prev = prev_node;
 
    /* 7. Change previous of new_node's next node */
    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}
void printList(Node *n){
    Node* last;
    cout << "\nTraversal in forward direction \n";
    while(n!=NULL){
        cout<<n->data<<" ";
        last=n;
        n=n->next;
    }
     cout << "\nTraversal in reverse direction \n";
     while(last!=NULL){
         cout << " " << last->data << " ";
        last = last->prev;

     }


}
int main(){
    Node *head=NULL;
    append(&head,6);
    push(&head,7);
     push(&head,1);
     append(&head,4);
      insertAfter(head->next, 8);
        cout << "Created DLL is: ";
      printList(head);



    return 0;
}