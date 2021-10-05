#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str="absjcj kdodm";
    // str.clear()
    // cout<<str;
    
    // cin>>str;
    // cout<<str;

    // string str1(5,'n');
    // cout<<str1<<endl;

    // string str3;
    // getline(cin,str3);
    // cout<<str3;

    string s1="Fam";
    string s2="ily";
    // s1.append(s2);
    // cout<<s1;
    // cout<<s1+s2;
    // cout<<s1.compare(s2);
    // s1.clear();
    // cout<<s1.empty();
    // s2.erase(0,2);
    // cout<<s2;

    string s3="lakshay";
    // cout<<s3.find("lak");
    // cout<<s3;
    s3.insert(6,"tanishq");
    // cout<<s3;
    // cout<<s3.length();
    // cout<<s3.substr(3,8);

    // String to INT 
    string s4="485";
    int x=stoi(s4);
    // cout<<x;
    int y=45;
    // INT to String 
    string s5=to_string(y);
    // cout<<s5;
    
    sort(str.begin(),str.end());
    cout<<str;
    return 0;
}