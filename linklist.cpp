#include <iostream>
using namespace std;

struct Node{

    int data;
    Node* next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};

void InsertAtStart(Node* &head,int value){
    Node* newNode=new Node(value);
    if(head==NULL){
        head=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
}

void InsertAtEnd(Node* &head, int value){
    Node* newNode=new Node(value);
    Node* temp=head;
    if(head==NULL){
        head=newNode;
    }
    else{
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
    }
}

void InsertAtSpecificPosition(Node* &head, int value, int position){
    Node* newNode=new Node(value);
    Node* temp=head;
    if(head==NULL){
        InsertAtStart(head,value);
    }
    else{
        for(int i=1; i<position-1 && temp!=NULL; i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
}

void DeleteAtStart(Node* &head){
    Node* temp=head;
    if(head==NULL){
        cout<<"Nothing to Delete. LinkList is Empty "<<endl;
    }
    else{
    head=temp->next;
    delete head;
    }
}

void DeleteAtEnd(Node* &head){
    Node*temp=head;
    if(head==NULL){
        cout<<"Nothing to Delete. LinkList is Empty "<<endl;
    }
    else{
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    }
}

void DeleteAtSpecificPosition(Node* &head, int position){
    Node* temp=head;
    if(head==NULL){
        cout<<"Nothing to Delete. LinkList is Empty "<<endl;
    }
    else if(position==1){
        DeleteAtStart(head);
    }
    else{
        for(int i=1; i<position-1 && temp!=NULL; i++){
            temp=temp->next;
        }
    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
    }
}

void SortList(Node* head) {
    if (head == nullptr) 
    return;

    bool swapped;
    do {
        swapped = false;
        Node* temp = head;

        while (temp != nullptr && temp->next != nullptr) {
            if (temp->data > temp->next->data) {
                int swapper = temp->data;
                temp->data = temp->next->data;
                temp->next->data = swapper;

                swapped = true;
            }
            temp = temp->next;
        }
    } while (swapped);
}



void Display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";

}

int main(){
Node* head=new Node(5);
InsertAtStart(head,1);
InsertAtStart(head,3);
InsertAtStart(head,6);
InsertAtStart(head,9);
SortList(head);

Display(head);
}