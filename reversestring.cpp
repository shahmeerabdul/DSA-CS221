#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main(){
    string str;
    string reverse="";
    cout<<"Enter String : ";
    getline(cin, str);

    for(int i=str.size()-1; i>=0; i--){
        reverse+=str[i];
    }
    cout<<"Original Text : "<<str<<endl;
    cout<<"Reverse Text : "<<reverse<<endl;
    if((==str){
        cout<<"Palindrome String"<<endl;
    }
    else{
        cout<<"Not a Plaindrome String";
    }

}
