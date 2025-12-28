#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){ //constructor initialized for each node
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* BuildTree(Node* root){ //takes root cause tree is build by root
    int data; //root data // this becomes root always for next
    cout<<"Enter Data "<<endl;
    cin>>data; // root
    root=new Node(data); // new node creation with constructor called
    if(data==-1){
        return NULL; //stop when this condition is met
    }
    cout<<"Enter Data to insert in left of "<<data<<endl;
    root->left=BuildTree(root->left); //left subtree building
    cout<<"Enter Data to insert in right of "<<data<<endl;
    root->right=BuildTree(root->right); //right subtree building
    return root;
}

void LevelOrderTraversel(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp= q.front();
        q.pop();
        if(temp==NULL){ //old traversel completed
            cout<<endl;//press enter
            if(!q.empty()){
                //queue still has some child nodes
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
        if(temp->left){
        q.push(temp->left);
        }
        if(temp->right){
        q.push(temp->right);
        }

        }
    }
}

void InorderTraversel(Node* root){
    if(root==NULL){
        return;
    }
        InorderTraversel(root->left);
        cout<<root->data<<" ";
        InorderTraversel(root->right);
}

void PreOrderTraversel(Node* root){
    if(root==NULL){
        return;
    }
        cout<<root->data<<" ";
        PreOrderTraversel(root->left);
        PreOrderTraversel(root->right);
        
}

void postOrderTraversel(Node* root){
    if(root==NULL){
        return;
    }
        postOrderTraversel(root->left);
        postOrderTraversel(root->right);
        cout<<root->data<<" ";
}

int main(){
    Node* root=NULL;
    root=BuildTree(root); //calling root
    cout<<"Printing in Level O"<<endl;
    LevelOrderTraversel(root);
    cout<<"Printing in Inorder"<<endl;
    InorderTraversel(root);
    cout<<endl;
    cout<<"Printing in PreOrder"<<endl;
    PreOrderTraversel(root);
    cout<<endl;
    cout<<"Printing in PostOrder"<<endl;
    postOrderTraversel(root);

}