// 1st Method
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;

    while(row<=n){

        int col = 1;
        while(col<=n){
            char ch = 'A' + col - 1;
            cout << ch <<" ";
            col += 1;
        }
        cout<<endl;
        row += 1;
    }  
}


// 2nd Method
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;

    while(row<=n){

        int col = 1;
        char ch = 'A';
        while(col<=n){
            cout << ch <<" ";
            ch += 1;
            col += 1;
        }
        cout<<endl;
        row += 1;
    }  
}
*/
