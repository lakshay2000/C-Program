// Reverse a string using recursion






#include <iostream>
using namespace std;
void revString(string s){
    if(s.length()==0){
        return;
    }

    string ros = s.substr(1);
    // after 1st index all the rest of the string will get stored in ros 
    revString(ros);
    cout<<s[0];
}
int main()
{
    revString("binod");

    return 0;
}