// 1st
/* 
#include<iostream>
using namespace std;


void update(int a){
    a = a/2;
}


int main() {
    int a = 10;
    update(a);
    cout<<a;
} 
 */


// 2nd
/* 
#include<iostream>
using namespace std;


int update(int a){
    a -= 5;
    return a;

}


int main() {
    int a = 15;
    update(a);
    cout<<a;
} 
 */


// 3rd

#include<iostream>
using namespace std;


int update(int a){
    int ans = a * a;
    return ans;
}


int main() {
    int a = 14;
    a = update(a);
    cout<<a;
} 
