// Inclusion-Exclusion Principle

// no of ways - no. of ways 1 + no. of ways 2 - no. of common ways

// how many no. btw 1 and 1000 are divisble by 5 or 7


int divisble(int n,int a,int b){
    int c1=n/a;
    int c2=n/b;

    int c3=n/(a*b);

    return c1+c2-c3;
}


#include <iostream>
using namespace std;
int main()
{
     int n,a,b;

     cin>>n>>a>>b;
     cout<<divisble(n,a,b);
    return 0;
}