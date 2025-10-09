#include <iostream>
using namespace std;

int main(){

int arr[]={0,0,0,0,0,0,0,0,0,0};

int digit;

int num;
cout<<"Enter Number : ";
cin>>num;

while(num!=0){

digit=num%10;
num/=10;


    if(digit==0){
        arr[0]++;
    }
    if(digit==1){
        arr[1]++;
    }
    if(digit==2){
        arr[2]++;
    }
    if(digit==3){
        arr[3]++;
    }
    if(digit==4){
        arr[4]++;
    }
    if(digit==5){
        arr[5]++;
    }
    if(digit==6){
        arr[6]++;
    }
    if(digit==7){
        arr[7]++;
    }
    if(digit==8){
        arr[8]++;
    }
    if(digit==9){
        arr[9]++;
    }

}
for(int i=0; i<9; i++){
cout<<"Frequency of "<<i<<" in Your Number is "<<arr[i]<<endl;
}
// cout<<"Frequency of 0 in Your Number is : "<<arr[0]<<endl;
// cout<<"Frequency of 1 in Your Number is : "<<arr[1]<<endl;
// cout<<"Frequency of 2 in Your Number is : "<<arr[2]<<endl;
// cout<<"Frequency of 3 in Your Number is : "<<arr[3]<<endl;
// cout<<"Frequency of 4 in Your Number is : "<<arr[4]<<endl;
// cout<<"Frequency of 5 in Your Number is : "<<arr[5]<<endl;
// cout<<"Frequency of 6 in Your Number is : "<<arr[6]<<endl;
// cout<<"Frequency of 7 in Your Number is : "<<arr[7]<<endl;
// cout<<"Frequency of 8 in Your Number is : "<<arr[8]<<endl;
// cout<<"Frequency of 9 in Your Number is : "<<arr[9]<<endl;

}



