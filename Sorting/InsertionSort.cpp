#include <bits/stdc++.h>
using namespace std;

// Insertion sort

/*
Array --->  23 34 2 5 12

            2 23 34 5 12
            5 2 23 34 12
            2 5 12 23 34

*/

int Insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;

        while ((j > 0) && (arr[j - 1] > arr[j]))
        {

            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;

            j--;
        }

        // swap(arr[j], arr[j + 1]);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Insertion_sort(arr, n);
    cout << "Sorted Array : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}