#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size,int target, int left, int right){
while(left<=right){
    int mid= (left+right)/2;

    if(arr[mid]==target){ 
        return mid;
    }

    if(arr[mid]<target){
        left=mid+1;
    }

    if(arr[mid]>target){
        right=mid-1;
    }

}
 return -1;
}


int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int left=0;
    int right=4;
    int target=1;

    int index=BinarySearch(arr, size, target, left, right);

    if(index>=0){

    cout<<"Targtet Found at Position "<<index+1<<endl;
    }

    else{
        cout<<"Target not found "<<endl;
    }
}
