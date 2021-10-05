// to find the prime number btw two number
#include <iostream>
using namespace std;
int main()
{   
    int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    
    cin>>b;
    
    for(int num=a;num<=b;num++){
        int i;
        for (i = 2; i < num; i++)
        {
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }

    return 0;
}