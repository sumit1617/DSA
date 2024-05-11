#include<iostream>
using namespace std;

int main() {

    int n = 1;
    char ch = '1';

    switch (ch)
    {
    case 1:
        cout<<"One";
        break;

    case '1':
        switch(n){
            case 1:
            cout<<"Value of n: " << n << endl;
            break;
        }
        break;
        
    default:
        cout<<"This is the default case";
        break;
    }
}