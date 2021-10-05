// form the biggest number from numeric string

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s="78953146";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s;

    return 0;
}