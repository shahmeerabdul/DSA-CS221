#include <iostream>
using namespace std;

int LinearSearch(int matrix[3][3],int rows, int cols, int target){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j]==target){
                return true;
            }
        }
    }
    return false;
    
}

int main(){
    int rows=3;
    int cols=3;
    int target;
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Enter Target : ";
    cin>>target;

    cout<<LinearSearch(matrix,rows,cols, target);
}