#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
void InsertAtStart(Node* &head, int value){

    Node* newNode= new Node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}
void InsertAtEnd(Node* &head, int value){
    Node* newNode= new Node();
    if(head==NULL){
        InsertAtStart(head, value);
    }
    newNode->data=value;
    newNode->next=NULL;

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void Traverse(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    
    }
    cout<<"NULL";
}
int main(){
    Node* head=NULL;

    InsertAtStart(head,100);
    InsertAtStart(head,200);
    InsertAtStart(head,300);   
    Traverse(head);
}