#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key)
{
    int s = start;
    int e = end;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
            break;
        }
        if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{
    int arr[10] = {12, 2, 33, 4, 7, 18, 9, 1, 0, 14};
    int n = 10;

    int key;
    cout << "Enter the Key: " << endl;
    cin >> key;

    cout << "Index of the key is: " << binarySearch(arr, 0, n - 1, key);
}