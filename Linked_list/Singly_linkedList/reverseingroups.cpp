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
Node* reverse(Node* head, int k)
{
    Node* current=head;
    Node* prev=NULL;
    Node* next=NULL;
    int count=0;
    while(current!=NULL && count<k){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        count++;
    }

    if(next!=NULL){
        head->next=reverse(next,k);
    }
    return prev;

}
int main(){
    Node* head=NULL;
    push(&head,9);
       push(&head,8);
          push(&head,7);
             push(&head,6);
                push(&head,5);
                   push(&head,4);
                      push(&head,3);
                         push(&head,2);
                            push(&head,1);
                            cout<<"Given List\n";

                            printList(head);
                            head=reverse(head,3);
                               cout<<"\nReverse List\n";

                            printList(head);

             


}