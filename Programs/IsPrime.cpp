#include <bits/stdc++.h>
using namespace std;
// Owskar Ganbawale
int main()
{
    int N;
    cout << "Enter the Numbr :";
    cin >> N;

    for (int i = 2; i * i <= N; i++)

    {

        if (N % i == 0)
        {

            cout << N << " is not a Prime Number";
            return 0;
        }
    }

    cout << N << " is a Prime Number";
    return 0;
}