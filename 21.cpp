// Decimal To Binary 


#include <iostream>
using namespace std;
int DecimalToBinary(int n){
    int x=1;
    int ans=0;
    while(x<=n){
        x*=2;

    }
    x/=2;

    while(x>0){
        int Last=n/x;
        n-=Last*x;
        x/=2;
        ans=ans*10+Last;

    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<DecimalToBinary(n)<<endl;
    return 0;
}