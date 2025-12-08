#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d){
        this->data=d;
        left=right=NULL;
    }
};

Node* InsertintoBST(Node* root, int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }
    else{
        if(d>root->data){
            root->right=InsertintoBST(root->right, d);
        }
        else{
            root->left=InsertintoBST(root->left, d);
        }
    }
    return root;
}

void TakeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=InsertintoBST(root, data);
        cin>>data;
    }
}

Node* Min(Node* root){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

Node* Max(Node* root){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

void PrintInOrder(Node* root) {
    if (root == nullptr) return;
    PrintInOrder(root->left);
    cout << root->data << " ";
    PrintInOrder(root->right);
}

int main(){
    Node* root=NULL;
    cout<<"Enter Data to Create BST "<<endl;
    TakeInput(root);
    cout << "BST in sorted order:" << endl;
    PrintInOrder(root);
    cout << endl;

    cout<<Min(root)->data;
    cout<<endl;
    cout<<Max(root)->data;
}