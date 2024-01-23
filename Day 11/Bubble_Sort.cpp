#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // for round 1 to n-1
        bool swapped = false;

        for (int j = 0; j < n - i; j++)
        {

            // process element till n-i th index
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            // already sorted
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}

int main()
{
    int size;
    cout << "size of an array: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, size);
}