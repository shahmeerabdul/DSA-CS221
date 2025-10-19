#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void Insert(Node* &head, int value){
    Node* newNode=new Node;
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}

void Display(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

void Reverse(Node* &head){
    Node* prev=NULL;
    Node* next=NULL;
    Node* temp=head;

    while(temp!=NULL){
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    head=prev;
}

int Mid(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<"Mid Node is ";
    return slow->data;
}

int main(){
    Node* head=NULL;
    Insert(head,1);
    Insert(head,2);
    Insert(head,3);
    Insert(head,4);
    Insert(head,5);

    Display(head);
    cout<<endl;
    Reverse(head);
    Display(head);
    cout<<endl;
    cout<<Mid(head);
    
}