#include<iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"Printing the Sum from 1 to n"<<endl;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }

    cout<<sum++<<endl;
}