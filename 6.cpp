//Switch Case 

#include <iostream>
using namespace std;
int main()
{   
    char button;
    cout<<"Input a character"<<endl;
    cin>>button;

    switch (button)
    {
    case 'a':cout<<"Hello"<<endl;
        break;
    case 'b':cout<<"Salute"<<endl;
        break;
    case 'c':cout<<"namaste"<<endl;
        break;
    case 'd':cout<<"hola"<<endl;
        break;
    
    default: cout<<"I am still learning"<<endl ;
           break;
    }
    return 0;
}   