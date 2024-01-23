#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 4, b = 5;

    cout << add(a, b);
    return 0;
}