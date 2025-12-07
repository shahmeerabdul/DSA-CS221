#include <iostream>
using namespace std;


int main(){
    int rows=3;
    int cols=3;
    int** arr=new int* [rows];

    for(int i=0; i<rows; i++){
        arr[i]=new int [cols];
    }
    int counter=0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            arr[i][j]=counter+=2;
        }    
    }

     for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;   
    }

    for(int i=0; i<rows; i++){
        delete[] arr[i];
    }
    delete[] arr;
}