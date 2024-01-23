#include<iostream>
using namespace std;


bool linearSearch(int arr[], int size, int key){

    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }

    return 0;
}

int main() {

    int arr[5] = {5, 8, 9, 6, 12};
    int key;
    cout<<"Enter a Key: ";
    cin>>key;

    bool found = linearSearch(arr, 5, key);

    if(found){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}