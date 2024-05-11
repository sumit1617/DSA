#include<iostream>
using namespace std;

int main() {
    int n;
    int a = 0;
    int b = 1;

    cout<<"Enter the value of n for Fibonacci Series: ";
    cin>>n;
    cout<<"Fibonacci series of "<< n << " : ";

    cout<<a << " " << b << " ";

    for(int i=1; i<=n; i++){
        int nextNum = a+b;
        cout<<nextNum<<" ";
        a = b;
        b = nextNum;
    }

}