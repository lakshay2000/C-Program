// Keypad phone problem

// print all possible words from phone digit

#include <iostream>
using namespace std;

string keypadArr[]={"","","abc","def","ghi","jkl","mno","pqrst","uvw","xyz"};

void possibleword(string s,string ans){
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }


    char ch=s[0];
    string code=keypadArr[ch-'0'];
    string ros=s.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        possibleword(ros,ans + code[i]);

    }
    



}

int main()
{
    possibleword("23","");
    return 0;
}