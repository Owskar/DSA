#include <bits/stdc++.h>
using namespace std;
//  Owskar Ganbawale

int main()
{
    int CP, CN, CD, CB, ML;
    cout << "Enter the marks of CP :";
    cin >> CP;
    cout << "Enter the marks of CN :";
    cin >> CN;
    cout << "Enter the marks of CD :";
    cin >> CD;
    cout << "Enter the marks of CB :";
    cin >> CB;
    cout << "Enter the marks of ML :";
    cin >> ML;

    float sum = CP + CN + CD + CB + ML;
    cout << "Sum of all subjects is :" << sum << endl;

    float avg = sum / 5;
    cout << "Avarge of subjects is :" << avg << endl;

    float percentage = ((sum / 500) * 100);

    cout << "The percentage is :" << percentage << " %" << endl;

    if (percentage >= 75)
    {
        cout << "Student got the Distinction";
    }
    else if (percentage >= 65 && percentage < 75)
    {
        cout << "Student got the First class";
    }
    else if (percentage >= 50 && percentage < 65)
    {
        cout << "Student got the Second class";
    }
    else if (percentage >= 40 && percentage < 50)
    {
        cout << "Student got the Third class";
    }
    else if (percentage < 40)
    {
        cout << "Student is Failed";
    }
    return 0;
}