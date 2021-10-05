// Find the factorial of a number

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int prevFact = factorial(n - 1);
    return n * prevFact;
}

#include <iostream>
using namespace std;
int main()
{
    cout << factorial(5);

    return 0;
}