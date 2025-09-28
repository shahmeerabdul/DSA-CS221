#include <iostream>
using namespace std;

int main(){

    int rows=3;
    int cols=3;
    int elements=1;

    int * arr= new int[rows*cols];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            elements=elements+1;
            *(arr+i*cols+j)=elements++;
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<*(arr+i*cols+j)<<" ";
        }
        cout<<endl;
    }

    delete[] arr;
}