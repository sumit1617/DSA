// Merge 2 sorted array

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void print(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(vector<int> &arr1, int m, vector<int> &arr2, int n)
{
    int i = m;
    for (int j = 0; j < n; j++)
    {
        arr1[i] = arr2[j];
        i++;
    }
    sort(arr1.begin(), arr1.end());

    print(arr1);
}

int main()
{
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {2, 5, 6};

    // merge(arr1, 3, arr2, 3);

    int i = 0, m = 3;
    int j = 0, n = 3;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr1[i] = arr1[i];
            i++;
        }
        else
        {
            arr1[i] = arr2[j];
            j++;
        }
    }
    while (j < n)
    {
        arr1[i++] = arr2[j++];
    }

    for (int a = 0; a < arr1.size(); a++)
    {
        cout << arr1[a] << " ";
    }

    return 0;
}