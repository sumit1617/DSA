#include<iostream>
using namespace std;

int main(){
/*
    int a,b;

    cout << "Value of a : ";
    cin >> a;
    cout << "Value of b : "; 
    cin >> b;

    if (a>b){
        cout << "Value of a is greater than b";
    }
    else {
        cout << "Value of b is greater tha a";
    }
*/

/*
    int a;
    cout << "value of a : ";
    cin >> a;

    if(a>0){
        cout << "a is +ve";
    }
    else if (a<0)
    {
        cout << "a is -ve";
    }
    else {
        cout << "a is 0";
    }
*/


// HW

char ch;
    cout<<"enter your data:";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "digits";
    }


}