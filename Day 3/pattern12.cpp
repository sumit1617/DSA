#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    char ch = 'A';

    while(row<=n){

        int col = 1;
        while(col<=n){
            cout << ch <<" ";
            ch += 1;
            col += 1;
        }
        cout<<endl;
        row += 1;
    }  
}