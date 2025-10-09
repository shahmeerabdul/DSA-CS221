#include <iostream>
using namespace std;

void MissingNumberFinder(int arr[], int size){
    int sum=(size*(size+1))/2;
    int arrsum=0;
    for(int i=0; i<size-1; i++){
        arrsum=arrsum+arr[i];
    }
    cout<<"Missing Number is "<<(sum-arrsum);
    return;
}

int main(){
    int arr[]={1,3};
    int size=3;
    MissingNumberFinder(arr,size);
}