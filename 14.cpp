// Given number is armstrong number or not
// Whose cube of all digits is the original number
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int originalN = n;
    while (n > 0)
    {
        cout << originalN << endl;
        int lastDigit = n % 10;
        cout<<lastDigit<<endl;
        sum += (lastDigit*lastDigit*lastDigit);
        cout << sum<<" "<<endl;
        n = n / 10;
    }

    if (sum == originalN)
    {
        cout << "It is an armstrong" << endl;
    }
    else if (sum != originalN)
    {

        cout << "It is not" << endl;
    }

    // for(int i=0;i<originalN;i++){
    //     cout<<i<<endl;
    // }
    return 0;
}