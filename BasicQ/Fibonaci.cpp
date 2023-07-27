#include <bits/stdc++.h>
using namespace std;
/*
input = 4

(0 1 1 2 3 5 8 13 )

output= 2


*/
int fibonacci(int n)
{
    int N;
    bool num = 0;
    cin >> N;
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i <= n; i++)
    {
        int NextNumber = a + b;
        cout << NextNumber << " ";
        a = b;
        b = NextNumber;
        }
}
int main()
{
    int n;
    cin >> n;
    fibonacci(n);

    return 0;
}