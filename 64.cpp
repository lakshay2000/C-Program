// fibonacci number

int fibbonacci(int n)
{
    if (n == 0 || n==1)
    {
        return n;
    }
    // if (n == 1)
    // {
        // return 1;
    // }
    return fibbonacci(n - 1) + fibbonacci(n - 2);
}

#include <iostream>
using namespace std;
int main()
{
     cout<<fibbonacci(6);
    return 0;
}