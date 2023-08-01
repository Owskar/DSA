#include <bits/stdc++.h>
using namespace std;
// Owskar Ganbawale
int main()
{
    string s[5] = {"    ", " -- ", "   |", "|   ", "|  |"};

    string digit[10][5] = {
        {s[1], s[4], s[0], s[4], s[1]}, // 0
        {s[0], s[2], s[0], s[2], s[0]}, // 1
        {s[1], s[2], s[1], s[3], s[1]}, // 2
        {s[1], s[2], s[1], s[2], s[1]}, // 3
        {s[0], s[4], s[1], s[2], s[0]}, // 4
        {s[1], s[3], s[1], s[2], s[1]}, // 5
        {s[1], s[3], s[1], s[4], s[1]}, // 6
        {s[1], s[2], s[0], s[2], s[0]}, // 7
        {s[1], s[4], s[1], s[4], s[1]}, // 8
        {s[1], s[4], s[1], s[2], s[1]}, // 9
    };

    string num;
    cout << "Enter a Number : ";
    cin >> num;

    int d = 0;
    for (int col = 0; col < 5; col++)
    {
        for (int index = 0; index < num.length(); index++)
        {
            d = (int)num[index] - int('0');
            cout << digit[d][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
