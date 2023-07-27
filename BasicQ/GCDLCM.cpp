#include <bits/stdc++.h>
using namespace std;

// Using Euclidean’s theorem.

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    gcd(b, a % b);
}

int main()
{
    int A = 10;
    int B = 15;

    int GCD = gcd(A, B);
    int LCM = (A * B) / GCD;

    cout << " GCD : " << GCD;
    cout << " LCM : " << LCM;
    return 0;
}