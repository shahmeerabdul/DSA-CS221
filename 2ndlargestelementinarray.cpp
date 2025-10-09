#include <iostream>
using namespace std;

void SecondLargest(int arr[], int size){
    int maximum=INT_MIN;
    int maximum2=INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>maximum){
            maximum=arr[i];
        }
    }
    for(int i=0; i<size; i++){
        if(arr[i]>maximum2 && arr[i]<maximum){
            maximum2=arr[i];
        }

        }
    
    cout<<"2nd Maximum is "<<maximum2;
    }


int main(){
    int arr[]={5,4,3,2,1};
    int size=5;

    SecondLargest(arr, size);
}