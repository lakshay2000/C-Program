// maximum time occur element

#include <iostream>
using namespace std;
int main()
{
    string s="okcsofefnfn";
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i]=0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i]-'a']++;
    }

    char ans='a';
    int maxFreq=0;

    for (int i = 0; i < 26; i++)
    {
        if(freq[i]>maxFreq){
            maxFreq=freq[i];
            ans=i+'a';
        }
    }

    cout<<maxFreq<<" "<<ans;
    
    
    
    return 0;
}