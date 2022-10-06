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
void findendNode(Node** head_ref,int index)
{
    Node *temp=*head_ref;
  int len=0;
  while(temp!=NULL){
    temp=temp->next;
    len++;
  }
  temp=*head_ref;
  
 
 



   for(int i=1;i<len-index+1;i++){
   temp= temp->next;

   }
   cout<<temp->data;
   return;
  
   

}
int main(){
       Node* head=NULL;
    push(&head, 20);
     push(&head, 4);
      push(&head, 15);
       push(&head, 35);
  
       
      findendNode(&head,4);
    return 0;
}