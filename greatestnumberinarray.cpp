#include <iostream>
using namespace std;

int main(){

int array[]={1,2,3,4,5,7};

int maximum=INT_MIN;

for(int i=0; i<6; i++){
    if(array[i]>array[i+1]){
        maximum=array[i];
    }
}

cout<<"Maximum : "<<maximum;

}