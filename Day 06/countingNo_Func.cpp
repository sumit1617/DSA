#include<iostream>
using namespace std;


void countNo(int n){
    
    for (int i = 1; i<=n; i++){
        cout<<i<<endl;
    }
}


int main() {
    
    int n;
    cout<<"Enter the No: ";
    cin>>n;

    countNo(n);
}