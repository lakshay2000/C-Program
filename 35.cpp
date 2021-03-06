// maximum circular subarray sum
#include <iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n){
    int currentSum=0;
    int maxSum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum=max(maxSum,currentSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
            cin>>a[i];
    }
    int wrapsum;
    int nonwrapsum;

    nonwrapsum=kadane(a,n);
    int totalSum=0;

    for (int i = 0; i < n; i++)
    {
        totalSum+=a[i];
        a[i]=-a[i];
    }
    wrapsum=totalSum+kadane(a,n);

    cout<<max(wrapsum,nonwrapsum);
    
    return 0;
}   