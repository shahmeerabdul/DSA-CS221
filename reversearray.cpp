#include <iostream>
using namespace std;

void ReverseArray(int arr[], int size){
    int start=0;
    int end=size-1;
    for(int i=0; i<size/2; i++){
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
}
}

int main(){
    int arr[]={5,4,3,2,1};
    int size=5;
    ReverseArray(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}