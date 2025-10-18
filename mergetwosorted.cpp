#include <iostream>
using namespace std;

void Merge(int arr1[], int size1, int arr2[], int size2, int merged[]){

    int i=0; int j=0; int k=0;

    while(i<size1 && j<size2){
        if(arr1[i]<=arr2[j]){
            merged[k]=arr1[i];
            i++;
        }
        else{
            merged[k]=arr2[j];
            j++;
        }
        k++;
    }

    while(i<size1){
        merged[k]=arr1[i];
        i++;
        k++;
    }

    while(j<size2){
        merged[k]=arr2[j];
        j++;
        k++;
    }

    for(int i=0; i<size1+size2; i++){
        for(int j=0; j<size1+size2; j++){
            if(merged[j]>merged[j+1]){
                int temp=merged[j];
                merged[j]=merged[j+1];
                merged[j+1]=temp;
            }
        }
    }
}

int main(){
    int arr1[]={3,1,1};
    int arr2[]={2,4,6};
    int size1=3;
    int size2=3;
    int merged[size1+size2];
    Merge(arr1,size1,arr2,size2, merged);
    for(int x=0; x<size1+size2; x++){
        cout<<merged[x]<<" ";
    }
}