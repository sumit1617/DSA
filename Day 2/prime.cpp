#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter the no:";
    cin>>n;

    int i = 2;

    while (i < n){

        if (n%1==0){
            cout << "Not Prime for " << i << endl;
        }
        else{
            cout << "Prime for " << i;
        }

        i += 1;
    }
}