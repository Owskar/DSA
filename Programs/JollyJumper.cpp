#include <bits/stdc++.h>
using namespace std;

// Owskar Ganbawale
bool isJolly(int a[], int n)
{
    vector<bool> diffSet(n, false);
    for (int i = 0; i < n - 1; i++)
    {
        int d = abs(a[i] - a[i + 1]);
        if (d == 0 || d > n - 1 || diffSet[d] == true)
            return false;

        diffSet[d] = true;
    }

    return true;
}

int main()
{
    int a[] = {11, 7, 4, 2, 1, 6};
    int n = sizeof(a) / sizeof(a[0]);
    isJolly(a, n) ? cout << "Yes" : cout << "No";
    return 0;
}