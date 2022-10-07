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
void removeDuplicate(Node** head_ref)
{
    Node *ptr1=*head_ref;
    Node *ptr2,*dup;

    while(ptr1!=NULL && ptr1->next!=NULL){
        ptr2=ptr1;
        while(ptr2->next!=NULL){
            if(ptr1->data==ptr2->next->data){
                dup=ptr2->next;
                ptr2->next=ptr2->next->next;
                delete(dup);
            }
            else{
                ptr2=ptr2->next;
            }
        }
        ptr1=ptr1->next;
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
          removeDuplicate(&head);
              printList(head);

  
       
    
    return 0;
}