#include <iostream>
using namespace std;
int main()
{
    int pocket=3000;
    for(int date=1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(pocket==0){
            break;
        }
        cout<<"Go out Today!"<<date<<endl;
        pocket=pocket-300;


    }
    return 0;
}