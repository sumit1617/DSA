#include<iostream>
using namespace std;


void printArray(int arr[], int size){

    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}


int main() {

    int third[10] = {2, 7};

    printArray(third, 1);

    int thirdSize = sizeof(third)/sizeof(int);
    cout<<endl<<"Size of Third Array is: "<<thirdSize;

    double fth[10];
    int fthsize = sizeof(fth);
    cout<<endl<<"Size of fth array is: "<<fthsize;
}