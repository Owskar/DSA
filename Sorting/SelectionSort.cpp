#include <bits/stdc++.h>
using namespace std;

// selection sort

/*
array = 23 34 54 3 5

        3 34 54 23 5
        3 5 54 23 34
        3 5 23 54 34
        3 5 23 34 54


*/

int selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[min], arr[i]);

        // int temp = arr[min];
        // arr[min] = arr[i];
        // arr[i] = temp;
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

    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}