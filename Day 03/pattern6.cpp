#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while(j<=i){
            cout<<"*";
            j += 1;
        }
        cout << endl;
        i += 1;
    }   
}
// Output
// *
// **
// ***
// ****
// *****

// --------------------------------------------------------------------------------------------------------------
/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while(j<=i){
            cout<<"*";
            j += 1;
        }
        cout << endl;
        i += 1;
    }   
}
*/


// Output
// 1
// 22
// 333
// 4444
// 55555