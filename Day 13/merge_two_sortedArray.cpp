#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    // Copying 1st array remaining elements
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    // Copying 2nd array remaining elements
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {2, 5, 6};
    int arr3[6] = {0};

    merge(arr1, 3, arr2, 3, arr3);
    print(arr3, 6);
    return 0;
}