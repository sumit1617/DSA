#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    int sum = 1;

    while(row<=n){
        int space = n-row;
        while(space){
            cout<<" ";
            space--;
        }

        int col = 1;
        while(col<=row){
            cout<<sum;
            sum++;
            col++;
        }

        cout<<endl;
        row++;
    }
}
