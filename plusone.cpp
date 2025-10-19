#include <iostream>
using namespace std;

void PlusOne(int arr[], int size){
    
    if(arr[size-1]!=9){
            arr[size-1]+=1;
    }
    else{
    while(arr[size-1]==9){
        arr[size-1]=0;
        size--;
    }
    arr[size-size]+=1;
}
}


int main(){
    int arr[]={9,1,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    PlusOne(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}