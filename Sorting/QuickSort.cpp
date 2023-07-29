#include <bits/stdc++.h>
using namespace std;

/*
Time complexity : Nlogn
Space complexity : O(1)
In Quick sort
I ) picks up  a pivote element (pivote element will any element from the array ).

II) make the arry as like the elements which are smaller than pivote are on left side and elements which are larger than pivote are on right side.

III) Do step 2 untill all array get sorted.

*/

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1) // (i<=high-1)  it dosent cross boundry when we do i++
        {
            // getting smaller no than pivote
            i++;
        }
        while (arr[j] > pivot && j >= low + 1) // (j>=low+1)  it dosent cross boundry when we do j--
        {
            // getting greater no than pivote
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void qs(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}
// vector<int> quickSort(vector<int> arr)
// {

//     // Write your code here.
//     qs(arr, 0, arr.size() - 1);
//     return arr;
// }

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr.push_back(num);
    }

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    qs(arr, 0, arr.size() - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
