// To find the maximum number and minimum number in an array
#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int maxNo=INT16_MIN;
    int minNo=INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        maxNo=max(maxNo,arr[i]);

        minNo=min(minNo,arr[i]);

    }
    cout<<maxNo<<endl;
    cout<<minNo<<endl;
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    return 0;
}