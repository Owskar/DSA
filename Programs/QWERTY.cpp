#include <bits/stdc++.h>
using namespace std;
// Owskar Ganbawlae
// Roll No - 36
const string CHARS = "qwertyuiopasdfghjklzxcvbnm";
const int MAX = 26;

string getString(string str, int n)
{
    unordered_map<char, char> uMap;
    for (int i = 0; i < MAX; i++)
    {
        uMap[CHARS[i]] = CHARS[(i + 1) % MAX];
    }

    for (int i = 0; i < n; i++)
    {
        str[i] = uMap[str[i]];
    }
    return str;
}
int main()
{
    string str = "owskar";
    int n = str.length();

    cout << getString(str, n);

    return 0;
}
