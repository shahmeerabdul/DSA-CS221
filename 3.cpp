#include <iostream>
using namespace std;

class stack{
    public:
    int top;
    int* arr;
    int size;

    stack(int size){
        this->size=size;
        top=-1;
        arr= new int [size];  
    }

    void push(int element){
        if(size-top>1){
            arr[++top]=element;
        }
        else{
            cout<<"Stack Full "<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--; 
        }
        else{
            cout<<"Stack is Empty "<<endl;
            return;
        }

    }

    int peek(){
        if(top==-1){
            cout<<"Stack Empty "<<endl;
        }
        else{
        
            return arr[top];
        }
        return -1;
    }

    bool isEmpty(){
        return top==-1;
    }

    bool isFull(){
        return top==size;
    }
    void display(){
        for(int i=0; i<=top; i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    stack s1(5);
    s1.push(200);
    s1.push(300);
    s1.push(400);
    s1.push(500);
    s1.push(600);
    s1.pop();

    s1.display();


}
