#include <iostream>
using namespace std;

int main() {
    int num=123;
    int lastdig;
    int rev = 0;
    

    while (num != 0) {
        lastdig = num % 10;         
        rev = rev * 10 + lastdig;   
        num /= 10;                 
    }

    cout << rev;
}
