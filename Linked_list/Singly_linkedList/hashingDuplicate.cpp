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
void removeDuplicate(Node *head)
{
    Node *curr=head;
    Node *prev =NULL;
 unordered_set<int>seen;


 while(curr!=NULL){
    if(seen.find(curr->data)!=seen.end()){
     prev->next=curr->next;
     delete(curr);
    }
    else{
        seen.insert(curr->data);
        prev=curr;

    }
    curr=prev->next;
 }



   

}
int main(){
       Node* head=NULL;
    push(&head, 12);
     push(&head, 11);
      push(&head, 12);
       push(&head, 21);
        push(&head, 41);
         push(&head, 43);
          push(&head, 21);
          printList(head);
          cout<<"\n After remove:\n";
          removeDuplicate(head);
           printList(head);
        

  
       
    
    return 0;
}