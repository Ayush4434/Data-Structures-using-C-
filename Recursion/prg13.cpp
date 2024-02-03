#include <iostream>
#include <string>
using namespace std;
// Write a program to generate all substrings of a string
void subseq(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string res = s.substr(1);
    subseq(res,ans);
    subseq(res,ans+ch);
}
int main()
{
    string s = "ABC";
    string ans = "";
    subseq(s,ans);
}