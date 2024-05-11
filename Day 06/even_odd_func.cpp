#include<iostream>
using namespace std;

char evenOdd(){

    int number;
    cout<<"Enter the number: ";
    cin>>number;

    if(number%2 == 0){
        cout<<"Even Number"; 
    }
    else{
       cout<<"Odd Number";
    }

    // return 0;
}

int main() {

    char ans = evenOdd();
}