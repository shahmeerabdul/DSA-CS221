#include <iostream>
using namespace std;

void CopyArray(int arr[], int size, int copy[]){
    for(int i=0; i<size; i++){
        copy[i]=arr[i];
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int copy[]={0};

    cout<<"Original Array "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    CopyArray(arr, size,copy);
    cout<<"copied Array "<<endl;
    for(int i=0; i<size; i++){
        cout<<copy[i]<<" ";
    }
}
