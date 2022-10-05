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
void delNodebyPos(Node** head_ref,int pos){
    Node* temp=*head_ref;
    Node* temp1=NULL;
if(*head_ref==NULL) return;
if(pos==0){
    *head_ref=temp->next;

    free(temp);
    return;
}
for(int i=0;temp != NULL && i<pos-2;i++){
    temp=temp->next;
}
if (temp == NULL || temp->next == NULL)
        return;
 Node* next=temp->next->next;
 free(temp->next);
 temp->next=next;
    







}

int main(){
    Node* head=NULL;

    push(&head,4);
     push(&head,3);
      push(&head,2);
       push(&head,1);
    printList(head);

    delNodebyPos(&head,4);
    puts("Deletion after node: ");
     printList(head);




    return 0;
}