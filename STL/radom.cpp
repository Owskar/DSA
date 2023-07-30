#include <iostream>

#define FOR(i, n) for (int i = 0; i < n; i++)

using namespace std;

struct Number
{
    bool alt;
    bool ust;
    bool sagust;
    bool solust;
    bool orta;
    bool sagalt;
    bool solalt;
};

Number n0, n1, n2, n3, n4, n5, n6, n7, n8, n9;
string str;
int n;

void g(Number &x)
{
    x.alt = true;
    x.ust = true;
    x.orta = true;
    x.sagalt = true;
    x.solalt = true;
    x.sagust = true;
    x.solust = true;
}

void init()
{
    g(n0);
    g(n1);
    g(n2);
    g(n3);
    g(n4);
    g(n5);
    g(n6);
    g(n7);
    g(n8);
    g(n9);
    n0.orta = false;
    n1.ust = false;
    n1.alt = false;
    n1.orta = false;
    n1.sagust = false;
    n1.sagalt = false;
    n2.sagust = false;
    n2.solalt = false;
    n3.sagalt = false;
    n3.sagust = false;
    n4.ust = false;
    n4.alt = false;
    n4.sagalt = false;
    n5.solust = false;
    n5.sagalt = false;
    n6.solust = false;
    n7.orta = false;
    n7.sagalt = false;
    n7.sagust = false;
    n7.alt = false;
    n9.sagalt = false;
}

void drawhorizontalline(int n, int c)
{
    cout << " ";
    FOR(i, n)
        cout << "-";
    if (c)
        cout << "  ";
    else
        cout << " ";
}

void drawverticalline(int n, int c)
{
    cout << "|";
    if (c)
        FOR(i, n + 2)
            cout << " ";
    else
        FOR(i, n + 1)
            cout << " ";
}

void drawverticalline2(int n, int c)
{
    cout << "|";
    FOR(j, n)
        cout << " ";
    if (c)
        cout << "| ";
    else
        cout << "|";
}

void drawverticalline3(int n, int c)
{
    FOR(j, n)
        cout << " ";
    if (c)
        cout << " | ";
    else
        cout << " |";
}

void ust_xett(Number num, int n, int c)
{
    if (num.ust)
        drawhorizontalline(n, c);
    else
    {
        if (c)
            FOR(i, n + 3)
                cout << " ";
        else
            FOR(i, n + 2)
                cout << " ";
    }
}
void alt_xett(Number num, int n, int c)
{
    if (num.alt)
        drawhorizontalline(n, c);
    else
    {
        if (c)
            FOR(i, n + 3)
                cout << " ";
        else
            FOR(i, n + 2)
                cout << " ";
    }
}
void orta_xett(Number num, int n, int c)
{
    if (num.orta)
        drawhorizontalline(n, c);
    else
    {
        if (c)
            FOR(i, n + 3)
                cout << " ";
        else
            FOR(i, n + 2)
                cout << " ";
    }
}
void yuxari_xett(Number num, int n, int c)
{
    if (num.sagust && num.solust)
        drawverticalline2(n, c);
    else if (num.sagust)
        drawverticalline(n, c);
    else if (num.solust)
        drawverticalline3(n, c);
}
void asagi_xett(Number num, int n, int c)
{
    if (num.sagalt && num.solalt)
        drawverticalline2(n, c);
    else if (num.sagalt)
        drawverticalline(n, c);
    else if (num.solalt)
        drawverticalline3(n, c);
}

Number ret(char s)
{
    if (s == '0')
        return n0;
    if (s == '1')
        return n1;
    if (s == '2')
        return n2;
    if (s == '3')
        return n3;
    if (s == '4')
        return n4;
    if (s == '5')
        return n5;
    if (s == '6')
        return n6;
    if (s == '7')
        return n7;
    if (s == '8')
        return n8;
    if (s == '9')
        return n9;
}

int main()
{
    init();
    while (cin >> n >> str && n != 0)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (i < str.length() - 1)
                ust_xett(ret(str[i]), n, 1);
            else
                ust_xett(ret(str[i]), n, 0);
        }
        cout << endl;
        FOR(i, n)
        {
            for (int i = 0; i < str.length(); i++)
            {
                if (i < str.length() - 1)
                    yuxari_xett(ret(str[i]), n, 1);
                else
                    yuxari_xett(ret(str[i]), n, 0);
            }
            cout << endl;
        }
        for (int i = 0; i < str.length(); i++)
        {
            if (i < str.length() - 1)
                orta_xett(ret(str[i]), n, 1);
            else
                orta_xett(ret(str[i]), n, 0);
        }
        cout << endl;
        FOR(i, n)
        {
            for (int i = 0; i < str.length(); i++)
            {
                if (i < str.length() - 1)
                    asagi_xett(ret(str[i]), n, 1);
                else
                    asagi_xett(ret(str[i]), n, 0);
            }
            cout << endl;
        }
        for (int i = 0; i < str.length(); i++)
        {
            if (i < str.length() - 1)
                alt_xett(ret(str[i]), n, 1);
            else
                alt_xett(ret(str[i]), n, 0);
        }
        cout << endl;
    }
    return 0;
}