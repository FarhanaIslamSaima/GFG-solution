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
void findNode(Node** head_ref,int index)
{
    Node *temp=*head_ref;
   for(int i=0;i<index;i++){
   temp= temp->next;
   }
   cout<<temp->data;
  
   

}
int main(){
       Node* head=NULL;
    push(&head, 14);
     push(&head, 30);
      push(&head, 10);
       push(&head, 1);
       
      findNode(&head,3);
    return 0;
}