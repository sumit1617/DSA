#include<iostream>
using namespace std;

int main() {

    int a,b;

    cout<<"Enter the Value of a: ";
    cin >>a;

    cout<<"Enter the value of b: ";
    cin >> b;

    char op;
    cout<<"Enter the operation that you want to perform from the following: + || - || * || / ||"<<endl;
    cin >> op;

    switch(op){

        case '+':
            cout<<"a + b = "<<(a+b)<<endl;
            break;

        case '-':
            cout<<"a - b = "<<(a-b)<<endl;
            break;

        case '*':
            cout<<"a * b = "<<(a*b)<<endl;
            break;
        
        case '/':
            cout<<"a / b = "<<(a/b)<<endl;
            break;
        
        default:
            cout<<"You have entered the wrong the operations please retry again";
            break;
    }
}