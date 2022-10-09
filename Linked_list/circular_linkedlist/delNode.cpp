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
if(*head_ref!=NULL){
    Node *temp=*head_ref;
   
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


void delNode(Node** head,int k){
    if(*head==NULL){
        return;
    }
    if((*head)->data==k && (*head)->next==*head){
        free(*head);
        *head=NULL;
        return;
    }
    Node *last=*head;
    Node*d;
    if((*head)->data==k){
        while(last->next!=*head){
            last=last->next;
        }
        last->next=(*head)->next;
        free(*head);
        *head=last->next;
        return;

    }
    while(last->next!=*head && last->next->data!=k){
        last=last->next;
    }
    if(last->next->data==k){
        d=last->next;
        last->next=d->next;
        free(d);
    }
    else{
        cout<<"No such keyFound";
    }


}
void printList(Node* head)
{
    Node* temp = head;

    if (head != NULL) {
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    }
  
    cout << endl;
}
  
int main(){
    Node* head=NULL;
  
    push(&head,6);
        push(&head,7);
              push(&head,8);
              printList(head);
              delNode(&head,7);
                  printList(head);
            



    return 0;
}