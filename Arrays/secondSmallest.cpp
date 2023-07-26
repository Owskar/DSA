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

    int smallest = arr[0];
    int secondS = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            secondS = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < secondS)
        {
            secondS = arr[i];
        }
    }
    cout << " Smallest element is : " << smallest << endl;
    cout << " Second smallest element is : " << secondS;
    return 0;
}