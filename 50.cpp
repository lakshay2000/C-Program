// to check if a given number is power of 2
// the numbers in the power of 2 always have only one set bit
#include <iostream>
using namespace std;

bool powerOf2(int n)
{
    return (n && !(n & n - 1));
}

int main()
{

    int n;
    cin >> n;
    cout<<powerOf2(n);
     return 0;
}