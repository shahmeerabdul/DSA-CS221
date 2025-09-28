#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;

    int square;
    int digits;
    int sumofdigits=0;

    square=num*num; //calculates square 

    while(square!=0){
        digits=square%10;
        square/=10;

        sumofdigits+=digits;
        
    }
    
    if(sumofdigits==num){
        cout<<"Neon "<<endl;
    }
    else{
        cout<<"Not a Neon "<<endl;
    }


}