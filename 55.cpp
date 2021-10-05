//to find a unique number in an array where all numbers except one are present thrice 

#include <iostream>
using namespace std;
bool getBit(int n,int pos){
    return ((n & (1<<pos))!=0);
}
int setBit(int n,int pos){

    return (n | (1<<pos));
}
int unique3(int arr[],int n){
    int result=0;
    for (int i = 0; i < 64; i++)
    {   int sum=0;
        for (int j = 0; j < n; j++)
        {
            if(getBit(arr[j],i)){
                sum++; 
            }
        }
        if(sum%3 !=0){
            result=setBit(result,i);
        }

        
        
    }
    return result;
    
}

int main()
{
    int ar[]={1,1,1,2,2,2,4};
    cout<<unique3(ar,7);
    return 0;
}