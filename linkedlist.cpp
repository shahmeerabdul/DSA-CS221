#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void InsertAtHead(Node* &head, int d){
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;
}

void Print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

int main(){
    Node* node1= new Node(100);
    Node* head=node1;

    InsertAtHead(head, 200);
    InsertAtHead(head, 300);
    InsertAtHead(head, 400);

    Print(head);

}