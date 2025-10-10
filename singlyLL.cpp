#include <iostream>
using namespace std;

struct  Node{
    int data;
    Node* next;
};

void InsertAtStart(Node* &head, int value){
    Node* newNode=new Node;
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}

void InsertAtEnd(Node* &head, int value){
    Node* newNode=new Node;
    newNode->data=value;
    if(head==NULL){
        InsertAtStart(head, value);
    }

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}

void InsertAtSpecificPosition(Node* head, int pos, int value){
    Node* temp=head;
    Node* newNode= new Node;
    newNode->data=value;

    if(pos==1){
        newNode->next=head;        
        head=newNode;
    }

    for(int i=1; i<pos-1 && temp!=NULL; i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void Print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){
    Node* head=NULL;
    InsertAtStart(head,200);
    InsertAtStart(head,300);
    InsertAtEnd(head,100);
    InsertAtSpecificPosition(head,1,1200);
    Print(head);

}