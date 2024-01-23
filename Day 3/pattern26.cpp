#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int row = 1;

    while(row<=n){

        // 1st Pattern 
        int col = 1;
        while(col <= n - row + 1){
            cout<<col<<" ";
            col++;
        }

        // 2nd Pattern 
        col = 1;
        while(col <= (row-1)*2){
            cout << "* ";
            col++;
        }

        // 3rd Pattern
        col = n - row + 1;
        while(col>= 1){
            cout<<col<<" ";
            col--;
        }

        cout<<endl;
        row++;
    }
}