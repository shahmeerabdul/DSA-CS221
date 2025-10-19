#include <iostream>
using namespace std;

void MoveZeroestoEnd(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size-1; j++){
            if(arr[j]==0 && arr[j+1]!=0){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int arr[]={0,0,12,0,0,1,2,0,3};
    int size=9;
    MoveZeroestoEnd(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}