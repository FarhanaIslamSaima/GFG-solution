#include<iostream>
#include <cmath>
#include <string>
#include <map>
using namespace std;
struct Node{

int data; 
Node* next;

};


void push(Node** head_ref,int new_data){

Node* new_node=new Node();
new_node->data=new_data;
new_node->next=*head_ref;
*head_ref=new_node;

}

 void printList(Node* n){

while(n!=NULL){


cout<<n->data<<" ";
n=n->next;
}

}


void insertNode(Node** head_ref,int n,int k){
Node *current=*head_ref;
Node *new_node=new Node();
new_node->data=k;
int len=0;

while(current!=NULL){

current=current->next;
len++;

}
current=*head_ref;
for(int i=0;i<len-n;i++){

current=current->next;


}

Node *next_current=current->next;
current->next=new_node;
new_node->next=next_current;


}
int main()
{
Node* head=NULL;

push(&head,18);
push(&head,5);
push(&head,12);
push(&head,3);
push(&head,8);
push(&head,10);
printList(head);
cout<<"\nAfter Reverser:\n";
insertNode(&head,2,11);

printList(head);






return 0;
}