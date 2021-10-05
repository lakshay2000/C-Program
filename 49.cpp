// Which bit is at position i

#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    if ((n & (1 << pos)) != 0)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
}

int setBit(int n,int pos){
    return (n | (1<<pos));
}

int clearBit(int n,int pos){
    int mask=~(1<<pos);
    return (n & mask);
}

int updateBit(int n, int pos,int val){
    int mask=~(1<<pos);
    n=n&mask;
    return n | (val<<pos);
}

int main()
{
    getBit(6, 2);
    // cout<<0101<<2;
    cout<<setBit(5,1)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1)<<endl;

    return 0;
}