#include <iostream>
using namespace std;
// Write a program to generate substrings with ascii number.
void subseq(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string res = s.substr(1);
    subseq(res,ans);
    subseq(res,ans+ch);
    subseq(res,ans+to_string(code));
}
int main()
{
    string s = "AB";
    string str = "";
    subseq(s,str);
}