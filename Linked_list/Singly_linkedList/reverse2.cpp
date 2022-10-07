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
void printReverse(Node* head){

    if(head==NULL){
        return;
    }
  
        printReverse(head->next);
        cout<<head->data<<" ";
  
    







}

int main(){
    Node* head=NULL;

    push(&head,4);
     push(&head,3);
      push(&head,2);
       push(&head,1);
    printList(head);


    puts("Reverse after node: ");
        printReverse(head);
 




    return 0;
}