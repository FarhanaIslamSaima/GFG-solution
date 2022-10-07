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
void rotate(Node** head_ref, int k)
{
Node* current=*head_ref;
int count=1;
while(count<k && current!=NULL){
    current=current->next;
    count++;
}
  if (current == NULL)
        return;
 
Node* kthNode=current;

while(current->next!=NULL)
    current=current->next;

current->next=*head_ref;
*head_ref=kthNode->next;
 
kthNode->next=NULL;
}
 
int main(){
       Node* head=NULL;
         push(&head, 60);
    push(&head, 50);
     push(&head, 40);
      push(&head, 30);
       push(&head, 20);
       push(&head, 10);

 cout<< "After reverse: "; 
    rotate(&head,4);
    printList(head);

       
    
    
  
     
    return 0;
}