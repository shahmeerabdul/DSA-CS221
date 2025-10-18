#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

};

void InsertNode(Node* &head, int value){
    Node* newNode=new Node;
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}

void ReverseLL(Node* &head){
    Node* temp=head;
    Node* prev=NULL;
    Node* next=NULL;
    while(temp!=NULL){
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;   
    }
    head=prev;
}

void Display(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){
    Node* head=NULL;

    InsertNode(head,100);
    InsertNode(head,200);
    InsertNode(head,300);
    InsertNode(head,400);
    InsertNode(head,500);
    Display(head);
    cout<<endl;

    ReverseLL(head);
    Display(head);
    
}