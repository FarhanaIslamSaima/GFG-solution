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
void sort(Node** head_ref)
{
    Node *curr=*head_ref;
    int len=0;
    while (curr!=NULL){
        curr=curr->next;
        len++;
    }
    for(int i=0;i<len && curr!=NULL;i++){
        if(curr->data>curr->next->data){
            curr->next=curr;
     
        }
     
    }
 

}
 
int main(){
       Node* head=NULL;

    push(&head, 3);
     push(&head, 4);
      push(&head, 5);
       push(&head, 1);
       push(&head, 2);

 cout<< "After sorting: "; 
   sort(&head);
    printList(head);

       
    
    
  
     
    return 0;
}