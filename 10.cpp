// 1
// 2 3
// 4 5 6
// 7 8 9 10




#include <iostream>
using namespace std;
int main()
{
    int n,num=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<=i;j++){
            cout<<++num<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

// also called Floyd's Triangle