#include <iostream>
using namespace std;


int main(){
    int arr[]={1,2,3,4,5};

    int position;

    cout<<"Enter Position From where u want to delete the element "<<endl;
    cin>>position;

    for(int i=position-1; i<5; i++){
        arr[i]=arr[i+1];
    }

    for(int i=0; i<5-1; i++){
        cout<<arr[i]<<" ";
    }

}