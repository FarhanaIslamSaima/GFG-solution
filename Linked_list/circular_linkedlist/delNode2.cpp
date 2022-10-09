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
    struct Node* next;
};
void push(Node** head,int data){
   Node* ptr1=new Node();
  ptr1->data=data;
  ptr1->next=*head;
  Node *temp=*head;
  if(*head!=NULL){
      while(temp->next!=*head){
    temp=temp->next;
  }
  temp->next=ptr1;


  }


  else{
    ptr1->next=ptr1;
 
  }
    *head=ptr1;



}

void delNode(Node** head_ref,int key){
    if(*head_ref==NULL){
        NULL;
    }
    if((*head_ref)->data==key && (*head_ref)->next==(*head_ref)){
        free(*head_ref);
        *head_ref=NULL;
        return;
    }

    Node *last=*head_ref,*d;
    while(last->next!=*head_ref && last->next->data!=key){
        last=last->next;
    }
    if(last->next->data==key){
        d=last->next;
        last->next=d->next;
        free(d);
    }
    else{
        cout<<"Key not found";
    }


}

void traverse(Node* head){
Node* temp=head;
if(head!=NULL){
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
}
cout<<endl;

}
int main(){
    Node *head=NULL;
    push(&head,6);
      push(&head,7);
       push(&head,8);
 traverse(head);
 delNode(&head,6);
  traverse(head);



    return 0;
}