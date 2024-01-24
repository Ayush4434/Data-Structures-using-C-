#include <iostream>
#include<string>
using namespace std;
//Reverse a string using recursion
void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string res = s.substr(1);
    reverse(res);
    cout<<s[0];
}
int main()
{
    string str = "AyushChauhan";
    reverse(str);
}