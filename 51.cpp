// to count the no. of one's in binary represenation

#include <iostream>
using namespace std;
int numberofOnes(int n){
    int count=0;
    while(n!=0){
        n=n& (n-1);
        count++;
    }
    return count;
}

int main()
{
    cout<<numberofOnes(19);
    return 0;
}