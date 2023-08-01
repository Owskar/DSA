#include <bits/stdc++.h>
using namespace std;
// Owskar Ganbawale
// Finding GCD and LCM of the numbers
int Gcd(int Num1, int Num2)
{
    if (Num2 == 0)
    {
        return Num1;
    }
    Gcd(Num2, Num1 % Num2); // Euclidean algorithm
}
int main()
{
    int Num1, Num2;
    cin >> Num1 >> Num2;

    int GCD; // Gcd(Num1, Num2);
    cout << " GCD of " << Num1 << " and " << Num2 << " is :" << GCD << endl;

    int LCM = (Num1 * Num2) / GCD;
    cout << " LCM of " << Num1 << " and " << Num2 << " is :" << LCM;

    return 0;
}