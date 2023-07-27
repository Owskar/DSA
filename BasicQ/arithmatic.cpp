#include <bits/stdc++.h>
using namespace std;
int add(int n1, int n2)
{
    int sum = n1 + n2;
    return sum;
}
int sub(int n1, int n2)
{
    int s = n1 - n2;
    return s;
}
float divisor(int n1, int n2)
{
    float d = (float)n1 / n2;
    return d;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int addition = add(n1, n2);
    int subtraction = sub(n1, n2);
    int division = divisor(n1, n2);

    cout << "the addition is" << addition;
    cout << "the sub is" << subtraction;
    cout << "the div is" << division;
    return 0;
}