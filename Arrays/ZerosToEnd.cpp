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
    /*
    Brute ---->

        vector<int> temp;
        // step 1 non-zero elements
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                temp.push_back(arr[i]);
            }
        }
        // adding nonzero
        int nz = temp.size();
        for (int i = 0; i < temp.size(); i++)
        {
            arr[i] = temp[i];
        }
        // adding zero
        for (int i = nz; i < n; i++)
        {
            arr[i] = 0;
        }
    */
    // optimal --->
    int count = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            count++;
            swap(arr[count], arr[i]);
        }
    }
    cout << "The array ended with zero is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}