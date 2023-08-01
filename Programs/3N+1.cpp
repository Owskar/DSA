#include <bits/stdc++.h>
using namespace std;
// Owskar Ganbawale
//  Collatz Conjecture problem (3n+1 problem)
int main()
{
    int num;
    cin >> num;
    cout << num;

    while (num != 1)
    {
        if (num % 2 == 0)
        {
            num /= 2;
            cout << num << " ";
        }
        else
        {
            num = (num * 3) + 1;
            cout << num << " ";
        }
    }
    return 0;
}