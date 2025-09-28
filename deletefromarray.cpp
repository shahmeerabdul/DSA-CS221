#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;

    cout<<"Enter Position from where you want to delete : "<<endl;
    int position;
    cin>>position;

    for(int i=position-1; i<5; i++){
        arr[i]=arr[i+1];
    }
    size--;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}