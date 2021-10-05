// finding 2 unique numbers in an array where all numbers ecept two are present twice

#include <iostream>
using namespace std;

int setbit(int n,int pos){
    return ((n & (1<<pos))!=0);
}

int unique2elemtn(int arr[],int n){
    int xorsum=0;

    for (int i = 0; i < n; i++)
    {
        xorsum=xorsum^arr[i];
    }
    int tempxor=xorsum;
    int setBit=0;
    int pos=0;
    while(setBit!=1){
        setBit=xorsum & 1;
        pos++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for (int i = 0; i < n; i++)
    {
        if(setbit(arr[i],pos-1)){
                newxor=newxor^arr[i];

        }
        
    }

    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;

    
    
}

int main()
{
    int arr[]={2,4,6,7,4,5,6,2};
    unique2elemtn(arr,8);

    return 0;
}