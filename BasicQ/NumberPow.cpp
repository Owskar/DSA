#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= 30; i++)
    {
        int num = pow(2, i);
        if (num == n)
        {
            printf("true");
            return true;
        }
    }
    printf("false");
    return false;
}
