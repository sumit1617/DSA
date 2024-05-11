#include<iostream>
using namespace std;

int power(){

    int a , b;
    
    cout<<"Enter the Value of a: ";
    cin>>a;
    cout<<"Enter the Value of b: ";
    cin>>b;

    int answer = 1;

    for (int i = 1; i<=b; i++){
        answer = answer * a;
    }

    return answer;
}

int main() {

    int ans = power();
    cout<<"the value of a raised to b = "<<ans;  
}