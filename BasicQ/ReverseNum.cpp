#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 23;
    int ans = 0;
    while (n != 0)
    {
        int dig = n % 10;
        ans = (ans * 10) + dig;
        n = n / 10;
    }
    cout << ans;
    return 0;
}