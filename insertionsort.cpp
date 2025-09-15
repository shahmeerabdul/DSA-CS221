#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size){
    for(int i=1; i<size; i++){

        int key=arr[i];

        int index=i-1;

        while(index>=0 && key<arr[index]){
            arr[index+1]=arr[index];

            index --;
        }

        arr[index+1]=key;
    }
}

int main(){
    int arr[]={5,4,3,2,1};
    InsertionSort(arr, 5);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}