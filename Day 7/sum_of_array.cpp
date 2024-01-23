#include<iostream>
using namespace std;


int sumOfArray(int num[], int n){

    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += num[i];
    }

    return sum;
}


int main() {

    int size;
    cin >> size;

    int num[100];

    for(int i = 0; i<size; i++){
        cin >> num[i];
    }

    cout<<"Sum of an Array is: "<<sumOfArray(num, size)<<endl;
}