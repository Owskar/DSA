#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {0, 1, 2, 3, 0};
    int cnt = -1;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != 0)
        {
            cnt++;
            swap(arr[cnt], arr[i]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}