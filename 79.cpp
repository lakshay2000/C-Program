// TILING PROBLEM 
//  given a "2 * n" board and tiles of size "2 * 1", count the number of way to tile the given board using these tiles 


#include <iostream>
using namespace std;


int tilingProbl(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return tilingProbl(n-1)+tilingProbl(n-2);
}


int main()
{

    cout<<tilingProbl(4);
    

    return 0;
}