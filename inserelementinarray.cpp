#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,5};
    int n=4;
    int position, elem;

    cout<<"Enter Position where u want to insert element "<<endl;
    cin>>position;

    cout<<"Enter Element "<<endl;
    cin>>elem;

    cout<<"Original Array "<<endl;
    for(int i=0; i<4; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=n; i>position-1; i--){
        arr[i]=arr[i-1];
    }
    n++;
    arr[position-1]=elem;
    
    cout<<"Modified Array Afrer Element Insertion "<<endl;
    for(int i=0; i<position+1; i++){
        cout<<arr[i]<<" ";
    }
}