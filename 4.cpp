#include <iostream>
using namespace std;

class stack{
    public:
    int top1;
    int top2;
    int* arr;
    int size;

    stack(int size){
        this->size=size;
        top1=-1;
        top2=size;
        arr= new int [size];  
    }

    void push1(int element){
        if(size-top1>1){
            arr[++top1]=element;
        }
        else{
            cout<<"Stack Full "<<endl;
        }
    }

    void push2(int element){
        if(size-top1>1){
            arr[--top2]=element;
        }
        else{
            cout<<"Stack Full "<<endl;
        }
    }

    int pop1(){
        if(top1>=0){
            int ans=arr[top1--];
            return ans; 
        }
        else{
            return -1;
        }

    }

    int pop2(){
        if(top2<size){
          int  ans=arr[top2++];
            return ans; 
        }
        else{
            return -1;
        }

    }

    void display(){
        for(int i=0; i<=top1; i++){
            cout<<arr[i]<<" ";
        }
        for(int i=size-1; i>=top2; i--){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    stack s1(6);
    s1.push1(1);
    s1.push1(2);
    s1.push1(3);
    s1.push2(4);
    s1.push2(5);
    s1.push2(6);
    s1.pop1();
    s1.pop2();

    s1.display();

}