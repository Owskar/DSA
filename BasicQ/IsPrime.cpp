#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 2; i * i <= N; i++)

    {

        if (N % i == 0)
        {

            cout << "0";
            return 0;
        }
    }

    cout << "1";
    return 0;
}