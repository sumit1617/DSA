#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    int row = 1;

    while (row<=n){

        // Print Space
        int space = n - row;
        while(space){
            cout<<" ";
            space--;
        }

        // Print 1st Triangle
        int col = 1;
        while(col<=row){
            cout<<col;
            col++;
        }

        // Print 2nd Triangle
        int start = row - 1;
        while(start){
            cout<<start;
            start--;
        }

        cout<<endl;
        row++;
    }
    
}