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
void removeNode(Node *head,int k,int n)
{
    Node *curr=head;
    Node *t=NULL;
    int count=0;
    while(curr){
        for(count=1;count<k && curr!=NULL;count++){
            curr=curr->next;
        }
        t=curr->next;
        for(count=1;count<=n;count++){
            Node *temp=t;
            t=t->next;
            free(temp);
        }
        curr->next=t;

        curr=t;
    }
 
 





   

}
int main(){
       Node* head=NULL;
         push(&head, 8);
    push(&head, 7);
     push(&head, 6);
      push(&head, 5);
       push(&head, 4);
        push(&head, 3);
         push(&head, 2);
          push(&head, 1);
          printList(head);
          cout<<"\n After remove:\n";
          removeNode(head,2,2);
               printList(head);
         
        

  
       
    
    return 0;
}