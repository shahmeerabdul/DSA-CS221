#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5};

    cout<<"Enter Position : ";
    int position;
    cin>>position;
    int size=5;
    
    cout<<"Enter Element to insert at End : ";
    int element;
    cin>>element;

    
    arr[position-1]=element;

    for(int i=0; i<position; i++){
        cout<<arr[i]<<" ";
    }
}