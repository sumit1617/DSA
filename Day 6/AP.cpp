#include<iostream>
using namespace std;


int calc_AP(int n){

    int ap = (3*n) + 7;

    return ap;
}


int main() {

    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int ap = calc_AP(n);
    cout<<"AP = "<<ap;

}