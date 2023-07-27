#include <bits/stdc++.h>
using namespace std;
// Find the number of set bits
/*
input = a ,b
a=2  --> 1 0
b=3  --> 1 1

*/

int Binary(int n)
{
    while (n != 0)
    {

        int bits = n & 1;
        int count = 0;
        if (bits == 1)
        {
            count++;
        }
        n = n >> 1;
        cout << count;
        cout << endl;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    Binary(a);
    Binary(b);

    return 0;
}