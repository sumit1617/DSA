#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;

    while (row<=n)
    {
        int col = row;
        // int value = row;
        while(col<2*row){
            cout<<col<<" ";
            // value +=1;
            col +=1;
        }
        cout << endl;
        row += 1;
    }   
}