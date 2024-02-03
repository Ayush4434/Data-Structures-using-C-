#include <iostream>
#include <string>
using namespace std;
// Write a program to move all x to the end of the string
string moveallx(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    string ans;
    ans = moveallx(s.substr(1));
    char ch = s[0];
    if(s[0]=='x')
    {
      return ans+ch;
    }
    else{
        return ch+ans;
    }
}
int main()
{
    string ans = "axxbdxcefxhix";
    cout<<moveallx(ans);
}