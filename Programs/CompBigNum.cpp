#include <iostream>
#include <vector>
// Name : Owskar Ganbawale
// Roll No : 36

// Structure representing a big number
struct bignum
{
    int signbit;
    int lastdigit;
    std::vector<int> digits;
};

// Constants for signbit values
const int PLUS = 1;
const int MINUS = -1;

// Function to compare two big numbers
int compare_bignum(bignum *a, bignum *b)
{
    int i;

    if ((a->signbit == MINUS) && (b->signbit == PLUS))
        return PLUS;
    if ((a->signbit == PLUS) && (b->signbit == MINUS))
        return MINUS;

    if (b->lastdigit > a->lastdigit)
        return PLUS * a->signbit;
    if (a->lastdigit > b->lastdigit)
        return MINUS * a->signbit;

    for (i = a->lastdigit; i >= 0; i--)
    {
        if (a->digits[i] > b->digits[i])
            return MINUS * a->signbit;
        if (b->digits[i] > a->digits[i])
            return PLUS * a->signbit;
    }

    return 0;
}

int main()
{
    bignum a, b;

    // Set up bignum values for testing
    a.signbit = MINUS;
    a.lastdigit = 3;
    a.digits = {1, 2, 3, 4}; // -4321

    b.signbit = PLUS;
    b.lastdigit = 3;
    b.digits = {4, 3, 2, 1}; // 4321

    int result = compare_bignum(&a, &b);

    if (result == PLUS)
        std::cout << "Comparison Result: PLUS" << std::endl;
    else if (result == MINUS)
        std::cout << "Comparison Result: MINUS" << std::endl;
    else
        std::cout << "Comparison Result: EQUAL" << std::endl;

    return 0;
}
