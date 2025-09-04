#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,4,5,7};
    int n=7;
    int sum=(n*(n+1))/2;
    int sumofarr=0;

    for(int i=0; i<6; i++){
        sumofarr= sumofarr+arr[i];
    }
    
    cout<<"Missing Number is "<<(sum-sumofarr)<<endl;

}
