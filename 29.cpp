// Longest Arithmetic Subarray
#include <iostream>
using namespace std;
int main()
{int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int ans=2;  //maximum length of array with same pd
    int pd=a[1]-a[0];  //previous difference
    int j=2;
    int curr=2;   ////current streak of same difference
    while(j<n){
        if(pd==a[j]-a[j-1]){
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        


        j++;
    }
      cout<<ans<<" ";
    return 0;
}