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
void push(Node** head_ref,int data){
    Node* ptr1=new Node();
    ptr1->data=data;
    ptr1->next=*head_ref;
    Node *temp=*head_ref;
    if((*head_ref)!=NULL){
        while(temp->next!=*head_ref){
            temp=temp->next;
        }
        temp->next=ptr1;
    }
    else{
        ptr1->next=ptr1;
        *head_ref=ptr1;
    }

}
bool checkList(Node** head){
    Node *check=*head;
   struct Node *node = (*head)->next;
 
    // This loop would stop in both cases (1) If
    // Circular (2) Not circular
    while (node != NULL && node != *head)
       node = node->next;
 
    // If loop stopped because of circular
    // condition
    return (node == *head);

}

void PrintList(Node* head){
    Node* temp=head;
    if(head==NULL){
        return;
    }
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
}
int main(){
    Node *head=NULL;
    push(&head,7);
      push(&head,6);
        push(&head,5);
        PrintList(head);
  checkList(&head)? cout << "Yes\n" :
                      cout << "No\n" ;
    return 0;
}