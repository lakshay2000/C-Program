// To change the string to either uppercase or lowercase

#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;
int main()
{
    string str="andddAAAsksks";


    for (int i = 0; i < str.size(); i++)
    {
    // covert upper case 
        if(str[i]>='a' && str[i]<='z'){
            str[i]=toupper(str[i]);
            // str[i]-=32;
        }
    // covert Lower case 
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]=tolower(str[i]);
            // str[i]+=32;
        }
    }
    cout<<str;
    
    return 0;
}