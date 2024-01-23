#include<iostream>
#include <climits>
using namespace std;



int getMin(int num[], int n){

    int mini = INT_MAX;

    for(int i = 0; i<n; i++){

        if(num[i] < mini){
            mini = num[i];
        }
    }

    return mini;
}




int getMax(int num[], int n){
    
    int maxi = INT_MIN;

    for(int i = 0; i<n; i++){

        if(num[i] > maxi){
            maxi = num[i];
        }
    }

    return maxi;
}



int main() {

    int size;
    cin>>size;

    int num[100];

    for(int i=0; i<size; i++){
        cin>> num[i];
    }    

    cout<<"Max number in array is: "<<getMax(num, size)<<endl;
    cout<<"Min number in array is: "<<getMin(num, size)<<endl;

}