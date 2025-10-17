#include <iostream>
using namespace std;

int main(){
    int rows=3;
    int cols=3;
    int matrix[rows][cols];
     
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>matrix[i][j];
        }
        cout<<endl;
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }



}
