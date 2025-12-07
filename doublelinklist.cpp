#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};

void InsertAtStart(Node* &head, int value){
    Node* newNode=new Node(value);
    if(head==NULL){
        head=newNode;
    }
    else{
        newNode->next=head;
        newNode->prev=NULL;
        head=newNode;
    }
}

void InsertAtEnd(Node* &head, int value){
    Node* newNode=new Node(value);
    Node* temp=head;
    if(head==NULL){
        InsertAtStart(head,value);
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp->next;
        newNode->next=NULL;
    }
}

void InsertAtSpecificPosition(Node* &head, int value, int position){
    Node* newNode=new Node(value);
    Node*temp =head;
    if(head==NULL){
        InsertAtStart(head,value);
    }
    else{
        for(int i=1; i<position-1 && temp!=NULL; i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        newNode->prev=temp;
    }
}

void Display(Node* head){
    Node* temp=head;
    cout<<"NULL<=>";
    while(temp!=NULL){
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){
    Node* head=new Node(1);
    InsertAtStart(head,2);
    InsertAtStart(head,3);
    InsertAtEnd(head,0);
    InsertAtSpecificPosition(head,45,3);
    Display(head);
}