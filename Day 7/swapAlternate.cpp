#include<iostream>
using namespace std;


void swapAlternate(int arr[], int n){

    int start = 0;
    int end = start+1;

    while(end<n){

        int temp = arr[end];
        // swap(arr[start], arr[end]);
        arr[end] = arr[start];
        arr[start] = temp;
        start += 2;
        end += 2;
    }
}


void printArray(int arr[], int n){
    
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}


int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int brr[6] = {1, 2, 3, 4, 5, 6};

    swapAlternate(arr, 5);
    swapAlternate(brr, 6);

    printArray(arr, 5);
    printArray(brr, 6);
}