// Binary to Decimal

#include <iostream>

using namespace std;

int binaryToDecimal(int n){
    int ans=0;  //sum ke liye
    int x=1;   //power
    while(n>0){
        int y=n%10;   //last digit
        ans+=x*y;   
        x*=2;
        n/=10;

    }
    return ans;
}

//Now everything will remain same like OctalToDecimal (isme bs x*=8)
int main()
{
    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
    return 0;
}