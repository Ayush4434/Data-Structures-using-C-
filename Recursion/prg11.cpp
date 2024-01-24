#include <iostream>
using namespace std;
// Removes all duplicates from the string.
void remove(string s)
{
    if(s.length()==0)
    {
        return;
    }
    if(s[0]==s[1])
    {
        remove(s.substr(1));
    }
    else
    {
        cout<<s[0];
        remove(s.substr(1));
    }
}
int main()
{
    string str = "aaaaaaaabbbbbbccccceeeeeddddd";
    remove(str);
}