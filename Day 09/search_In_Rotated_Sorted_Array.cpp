#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }

    return s;
}

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

    int arr[7] = {8, 9, 10, 1, 2, 3, 4};
    int n = 7;
    int key;
    cout << "Enter the Key: " << endl;
    cin >> key;

    int pivot = getPivot(arr, 7);
    // cout << "pivot is: " << pivot << endl;

    if (key >= arr[pivot] && key <= arr[n - 1])
    {
        cout << "Index of Key: " << binarySearch(arr, pivot, n - 1, key);
    }
    else
    {
        cout << "Index of Key: " << binarySearch(arr, 0, pivot - 1, key);
    }
}