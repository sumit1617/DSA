#include<iostream>
using namespace std;


int main() {

    int n;
    cout<<"enter the no: ";
    cin>>n;

    if (n <= 0) {
        return false;
    }

    while (n > 1) {
        if (n % 3 != 0) {
            return false;
        }
        n = n / 3;
    }
    return true;
}    
