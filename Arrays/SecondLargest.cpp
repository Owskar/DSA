#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Time complexity is O(N)

    int largest = arr[0];
    int secondL = -1; // INT_MIN
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondL = largest;
            largest = arr[i];
        }
    }
    cout << " Largest element is : " << largest << endl;
    cout << " Second Largest element is : " << secondL;
    return 0;
}