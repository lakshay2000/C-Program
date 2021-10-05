#include <iostream>
using namespace std;
int increment(int *a){
    (*a)++;
    // return *a;
    // ++a;
}

int main()
{
    int a=2;
    increment(&a);
    cout<<a;
    return 0;
}
