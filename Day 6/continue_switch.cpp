/*

Note: This code will giive error because we can't use the continue in switch cases. continue can be used in the loops.

*/


#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    switch(n){
        case 1:
            cout<<"one";
            continue;
        
        case 2:
            cout<<"two";
            break;

        case 3:
            cout<<"three";
            break;

        default:
            cout<<"Does'nt exist";
            break;
    }

}


