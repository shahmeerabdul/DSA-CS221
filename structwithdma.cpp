#include <iostream>
using namespace std;

struct Car{

string brand;
string model;
float price;

};

int main(){

int amountofcars;
cout<<"Enter Amount of Cars You want to add to inventory : ";
cin>>amountofcars;

Car* carsarray= new Car[amountofcars];

for(int i=0; i<amountofcars; i++){
    cout<<"Car "<<i+1<<endl;
    cout<<"Enter Brand of Car :";
    cin>>carsarray[i].brand;

    cout<<"Enter Model of Car :";
    cin>>carsarray[i].model;

    cout<<"Enter Price of Car :";
    cin>>carsarray[i].price;
}

for(int i=0; i<amountofcars; i++){
    cout<<"Car "<<i+1<<endl;
    cout<<"Brand : "<<carsarray[i].brand<<endl;
    cout<<"Model : "<<carsarray[i].model<<endl;
    cout<<"Price : "<<carsarray[i].price<<endl;
}
int highestprice=0;
for(int i=0; i<amountofcars; i++){
    if(carsarray[i].price>carsarray[highestprice].price){
        highestprice=i;
        cout<<"Car with Highest Price "<<endl;
        cout<<"Brand " <<carsarray[highestprice].brand<<endl;
        cout<<"Model " <<carsarray[highestprice].model<<endl;
        cout<<"Price " <<carsarray[highestprice].price<<endl;
    }
}

delete[] carsarray;

}