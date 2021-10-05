// RECURSION

//  Sum till n
#include <iostream>
using namespace std;

int Sum(int n)
{
    if(n==0){
        return 0;
    }

    int prevSum = Sum(n - 1);
    return n + prevSum;
}

int main()
{
    cout<<(Sum(5));

    return 0;
}