#include <iostream>
using namespace std;

void PlusOne(int arr[], int size){
    for(int i=0; i<size; i++){
        if(arr[size-1]!=9){
            arr[size-1]+=1;
            break;
        }
        else{
          arr[size-i-1]=0;
          arr[size-size]+=1;
        }
    }

}

int main(){
    int arr[]={1,9,9};
    int size=3;

    PlusOne(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}