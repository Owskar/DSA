#include <bits/stdc++.h>
using namespace std;

// printing 1 to n without loops
void printNos(int N)
{
    if (N != 0)
    {
        printNos(N - 1);
        cout << N << " ";
    }
}
int main()
{
    int N;
    cin >> N;
    printNos(N);

    return 0;
}