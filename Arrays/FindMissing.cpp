#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << "The array is : ";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int XOR1 = 0, XOR2 = 0;
    int n = N - 1;
    for (int i = 0; i < n; i++)
    {
        XOR2 = XOR2 ^ arr[i];
        XOR1 = XOR1 ^ (i + 1);
    }
    XOR1 = XOR1 ^ N;
    cout << " The missing element is :" << (XOR1 ^ XOR2);
    return XOR1 ^ XOR2;
}