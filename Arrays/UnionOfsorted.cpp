// union of arrays
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of first array :";
    cin >> n;
    int ar[n];
    cout << " enter the array :" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << "The array 1 is : ";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    int n1;
    cout << "Enter the size of second array :";
    cin >> n1;
    cout << " enter the array :" << endl;
    int arr2[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr2[i];
    }
    cout << "The array 2 is : ";
    for (int i = 0; i < n1; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    // 2 3 5 6 7
    // 3 4 6 7 9
    vector<int> unionArr;
    int i = 0;
    int j = 0;
    while (i < n && j < n1)
    {
        if (ar[i] <= arr2[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != ar[i])
            {
                unionArr.push_back(ar[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != arr2[j])
            {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (j < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr2[j])
        {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    while (i < n)
    {
        if (unionArr.size() == 0 || unionArr.back() != ar[i])
        {
            unionArr.push_back(ar[i]);
        }
        i++;
    }

    cout << "The union array is : ";
    for (auto it : unionArr)
    {
        cout << it << " ";
    }

    return 0;
}