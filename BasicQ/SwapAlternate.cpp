#include <bits/stdc++.h>
using namespace std;
void PrintArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int SwapNum(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}
int main()
{
    // swap the alternae numbers in an array

    int even[8] = {1, 3, 2, 4, 5, 6, 8, 7};
    int odd[7] = {2, 3, 4, 4, 5, 6, 1};
    SwapNum(even, 8);

    PrintArr(even, 8);

    SwapNum(odd, 7);
    PrintArr(odd, 7);

    return 0;
}