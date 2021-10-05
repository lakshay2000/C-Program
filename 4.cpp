// check if number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    int i;
    cout<<"Enter the value of n";
    cin>>n;
    for (i = 2; i < n; i++)
    {
        if(n%i==0){
            cout<<"it is non prime"<<endl;
            break;
        }
    }
    if(i==n){
    cout<<"Prime"<<endl;
    
    }
    return 0;
}