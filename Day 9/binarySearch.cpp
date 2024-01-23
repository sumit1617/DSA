#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    /* int mid = (start + end) / 2; */
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // Right Path me jana ho tab yeh kro
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // Left Path me jana ho tab yeh kro
            end = mid - 1;
        }

        // Mid ko bhi update kr do Qki start aur end bhi toh update hua hai
        /* mid = (start + end) / 2; */
        mid = start + (end - start) / 2;
    }

    // Key value na mili ho tab
    return -1;
}

int main()
{

    int even[6] = {1, 5, 6, 8, 12, 15};
    int odd[5] = {1, 5, 6, 8, 12};

    int evenArr = binarySearch(even, 6, 12);
    cout << "index of 12 is: " << evenArr << endl;

    int oddArr = binarySearch(odd, 5, 5);
    cout << "index of 5 is: " << oddArr << endl;
}