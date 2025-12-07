#include <iostream>
using namespace std;

void SelectionSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int smallestIndex=i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex=j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }
}

int main(){
    int arr[]={5,4,2,1};
    int size=4;
    SelectionSort(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}