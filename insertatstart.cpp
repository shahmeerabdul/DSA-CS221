#include <iostream>
using namespace std;

int main(){
    int arr[10]={2,3,4,5};
    int size=4;

    cout<<"Enter Position : ";
    int position;
    cin>>position;

    cout<<"Enter Element : ";
    int element;
    cin>>element;

    for(int i=4; i>position-1; i--){
        arr[i]=arr[i-1];
    }
    size++;
    arr[position-1]=element;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}