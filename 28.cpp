// Sum of all subarrays

#include <iostream>

using namespace std;
int main()
{
     int n;
     cin>>n;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
     }
     int currentSum=0;
     for (int i = 0; i <= n-1; i++)
     {
         currentSum=0;
         for (int j = i; j <= n-1; j++)
         {
             currentSum+=arr[j];
             cout<<currentSum<<endl;
         }
         
     }
     
     
    return 0;
}