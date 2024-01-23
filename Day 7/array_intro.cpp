#include<iostream>
using namespace std;

int main() {

    // Declarainng array
    int arr1[15] = {0};

    // Accessing
    cout<<"Value at 14th position: "<<arr1[14] << endl;


    // Initializing an Array
    int arr2[3] = {11, 8, 9};

    // Accessing
    cout<<"Value at 2nd Index location of arr2: "<<arr2[2] <<endl <<endl;

    
    // Initializing an Array
    int size = 10;
    int arr3[size] = {2,8};

    // Printing an Array
    for(int i = 0; i<size; i++){
        cout<<arr3[i]<<" ";
    }
}