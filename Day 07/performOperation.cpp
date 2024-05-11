#include<iostream>
using namespace std;

void performOperation(int a , int b, char opr){

    int ans;

    if(opr == '+'){
        ans = a+b;
        cout<<ans; 
    }
    else if(opr == '-'){
        ans = a-b; 
        cout<<ans; 
    }
    else if(opr == '*'){
        ans = a*b; 
        cout<<ans; 
    }
    else if(opr == '/'){
        ans = a/b; 
        cout<<ans; 
    }
}


int main() {

    int a,b;
    cout<<"Enter a & b: ";
    cin>>a>>b;

    char opr;
    cout<<endl<<"Enter the Operation that you want to perform: "<<endl;
    cin>>opr;

    // cout<< a << " " << opr << " " << b << " : " <<performOperation(a,b,opr);
    performOperation(a,b,opr);
}