#include <iostream>
using namespace std;

void CountEvenandOdd(int arr[], int size){
    int even=0;
    int odd=0;

    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Evens in The Array are "<<even<<endl;
    cout<<"Odds in The Array are   "<<odd<<endl;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;

    CountEvenandOdd(arr, size);
}