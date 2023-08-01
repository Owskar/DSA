#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, size;
    cout << "Enter the size(more than 10 && less than 30) : ";
    cin >> size;
    for (a = size / 2; a <= size; a = a + 2)
    {
        for (b = 1; b < size - a; b = b + 2)
        {
            cout << "R";
        }
        for (b = 1; b <= a; b++)
        {
            cout << " ";
        }
        for (b = 1; b < size - a; b++)
        {
            cout << "A";
        }
        for (b = 1; b <= a - 1; b++)
        {
            cout << " ";
        }
        for (b = 0; b < size - a; b = b + 2)
        {
            cout << "D";
        }
        cout << endl;
    }
    for (a = size; a >= 0; a--)
    {
        for (b = a; b < size; b++)
        {
            cout << "H";
        }
        for (b = 1; b <= (a * 2) - 1; b++)
        {

            cout << " ";
        }
        for (b = a; b < size; b++)
        {
            cout << "A";
        }
        cout << endl;
    }
    return 0;
}