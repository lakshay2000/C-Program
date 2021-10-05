// check if array is sorted or not

bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }

    bool restArr = sorted(arr + 1, n - 1);

        return (arr[0] < arr[1] && restArr);
    
}

#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,4,3,4,5,6};

    cout<<sorted(arr,6);
    return 0;
}